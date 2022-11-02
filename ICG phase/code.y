%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int valid=1;
int yylex();    
extern char* yytext;

int yyerror(const char *s);
int tops=-1;
void display();
extern int yylineno;
extern char* yytext;
char pushvar[20];
int lnum=0;
char temp[2] = "t";
char temp2[4]="t";
int temp_i = 0;
char tmp_i[3];
int W[10000];
int A[10000];
int R[10000];
int IFS[10000];
int if_top=-1;
int while_top=-1;
int rep_top=-1;
int i_top=-1;
int l_while = 0;
int ltop = 0;
void repeat1();
void repeat2();
void repeat3(); 
void ifelse4();
void ifelse3();
void ifelse2();
void ifelse1();
void while3();
void while2();
void while1();
void codegen_assign();
void codegen();
void optimize_code();
void intermediate_code();
void push(char *string);
int label[20];
int quadnum = 0;    
char stk[100][100];
int change=0;
int check(char *string);
int kk=0;



%}

%define parse.error verbose
%start Q
%token T_LIBRARY
%token T_NL
%token T_PRINT
%token T_WHILE
%token T_IF
%token T_BREAK
%token T_REPEAT
%token T_IN
%token T_ELSE
%token T_BY
%token T_LENGTHOUT
%token T_PASTEO
%token T_TRUE
%token T_FALSE
%token T_MOD
%token T_MMOD
%token T_NUM
%token T_STR
%token T_ID
%token T_COPEN
%token T_SEQOPEN
%token T_CO T_CC 
%token T_ADD T_SUB T_MUL T_DIV T_GT T_LT T_EQ T_AND T_OR

%left '<' '>' T_LE T_GE T_EE T_NE 
%right T_RA '=' T_LA


%%

Q:  {printf("\n\nIntermediate code is:\n\n");}S
    ;

S:  WHILE S 
    | IF S
    | REPEAT S 
    | BREAK S
    | EXP S 
    | T_PRINT '('ITEM')' T_NL S
    | T_CO  N S T_CC T_NL S
    | error T_NL S
    |
    ;

WHILE : T_WHILE N {while1();} '(' N COND N')' {while2();} N T_CO N S T_CC{while3();} T_NL
    ;

REPEAT : T_REPEAT {repeat1();} N T_CO N S T_CC {repeat2();}T_NL
    ;

BREAK : T_BREAK{repeat3();} T_NL
    ;


IF :     T_IF N '('  N COND N  ')' {ifelse1();} N  T_CO  NIF  
    ;

NIF :  N S T_CC T_NL{ifelse4();}
    |  N S T_CC T_NL{IFS[++i_top]=lnum;lnum++;} E{ifelse3();}
    ;   


E : T_ELSE {ifelse2();} T_IF N '(' N COND N ')' {ifelse1();} N T_CO N S T_CC T_NL EIF 
    | T_ELSE {ifelse2();} N T_CO N S T_CC T_NL
    ;

EIF: E
|{ifelse4();};

EXP :   K RELOP K {codegen();} T_NL
    | ID ASSIGNOP K {codegen_assign();} T_NL
    | K T_NL
    ;

COND :  K RELOP K {codegen();}
    | ID ASSIGNOP K {codegen_assign();}
    | K LOGICOP K {codegen();}
    | K 
    ;

K:  K T_ADD{strcpy(pushvar,"+");push(pushvar);} L {$$=$1+$3;codegen();}
    | K T_SUB{strcpy(pushvar,"-");push(pushvar);} L {$$=$1-$3;codegen();}
    | L {$$=$1;}
    ;
    
L:  L T_MUL{strcpy(pushvar,"*");push(pushvar);} O {$$=$1*$3;codegen();}
    | L T_DIV{strcpy(pushvar,"/");push(pushvar);} O {$$=$1/$3;codegen();}
    | O {$$=$1;}
    ;


O:  ID 
    | NUM {$$=$1;}
    |'('K')' 
    | ID'['INDEX']'
    ;

INDEX:  NUM','INDEX
    |ID','INDEX 
    |NUM 
    |ID
    ;

RELOP:  T_LT{strcpy(pushvar,"<");push(pushvar);}
    |T_GT{strcpy(pushvar,">");push(pushvar);}
    |T_EE{strcpy(pushvar,"==");push(pushvar);}
    |T_LE{strcpy(pushvar,"<=");push(pushvar);}
    |T_GE{strcpy(pushvar,">=");push(pushvar);}
    |T_NE{strcpy(pushvar,"!=");push(pushvar);}
    ;

ASSIGNOP:T_EQ{strcpy(pushvar,"=");push(pushvar);}
    |T_LA{strcpy(pushvar,"<-");push(pushvar);}
    |T_RA{strcpy(pushvar,"->");push(pushvar);}
    ; 

LOGICOP: T_AND{strcpy(pushvar,"&&");push(pushvar);}
    | T_OR{strcpy(pushvar,"||");push(pushvar);}
    ;

    
ITEM:   NUM 
    | BOOL 
    | STR 
    | PASTE 
    | ID
    ;

PASTE:  T_PASTEO'('PASTEIN')'
    ;


PASTEIN: STR ',' PASTEIN 
    | ID','PASTEIN  
    | ;

N:  T_NL
    |
    ;


NUM:    T_NUM{strcpy(pushvar,yytext);push(pushvar);}
    ;

BOOL:   T_TRUE 
    | T_FALSE
    ;

STR:    T_STR
    ;


ID:     T_ID{strcpy(pushvar,yytext);push(pushvar);}
    ;

%%

#include <ctype.h>
int yyerror(const char *s)
{
    extern int yylineno;
    valid =0;
    //display();
    printf("\nLine no: %d \n The error is: %s\n\n",yylineno-1,s);
}

typedef struct quadruples{
        int valid;
        char *op;
        char *arg1;
        char *arg2;
        char *res;
    }alls;

alls q[100];


void display()
{
    printf("\n\nQuadraple Table\n\n");
    printf("\tResult:\t\t Op:\t\t Arg1:\t\t Arg2:\t\t \n");
    for(int i=0;i<quadnum;i++)
    {
        if(q[i].valid)
        {
            printf("%d.\t%s \t\t %s \t\t %s \t\t %s \t\t \n",(i+1),q[i].res,q[i].op,q[i].arg1,q[i].arg2);
        }
            
    }   
    
}

void push(char *string) {
    
    strcpy(stk[++tops], string);
}

void codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("\t%s = %s %s %s\n",temp,stk[tops-2],stk[tops-1],stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char)*strlen(stk[tops-1]));
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops-2]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,stk[tops-1]);
    strcpy(q[quadnum].arg1,stk[tops-2]);
    strcpy(q[quadnum].arg2,stk[tops]);
    strcpy(q[quadnum].res,temp);
    quadnum++;
    tops-=2;
    strcpy(stk[tops],temp);

temp_i++;
}
void codegen_assign()
{
    printf("\t%s = %s\n", stk[tops-2], stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char));
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(stk[tops-2]));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "=");
    strcpy(q[quadnum].arg1, stk[tops]);
    strcpy(q[quadnum].arg2, "NULL");
    strcpy(q[quadnum].res, stk[tops-2]);
    quadnum++;
    char b[20];
        tops -= 2;
}

void ifelse1()
{
    
    strcpy(temp, "T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp, tmp_i);
    printf("\t%s = not %s\n", temp, stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char)*4);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "not");
    strcpy(q[quadnum].arg1, stk[tops]);
    strcpy(q[quadnum].arg2, "NULL");
    strcpy(q[quadnum].res, temp);
    quadnum++;

    printf("\tif %s goto L%d\n", temp, lnum);
    q[quadnum].op = (char*)malloc(sizeof(char)*3);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "if");
    strcpy(q[quadnum].arg1, temp);
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d", lnum);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    temp_i++;
    label[++ltop] = lnum;
    A[++if_top]=lnum;
    lnum++;
}

void ifelse2()
{
    int x;
    
    x=label[ltop--];
    if_top--;
    int r=IFS[i_top];
    printf("\tgoto L%d\n",r);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op, "goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char jug[10];
    sprintf(jug,"%d", r);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,jug));
    quadnum++;
    printf("L%d: \n",x);
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(x+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    
    char jug1[10];
    sprintf(jug1,"%d",x);
    char l1[] = "L";
    strcpy(q[quadnum].res,strcat(l1,jug1));
    quadnum++;

}

void ifelse3()
{
    //printf("yaha phatt rahi hai\n");
    int y;
    y = IFS[i_top--];
    printf("L%d: \n",y);
    //int mera=A[if_top--];
    //printf("L%d: \n",mera);
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(y+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",y);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;

}

void ifelse4()
{
        int res=A[if_top--];
        ltop--;
        printf("L%d:\n",res);
        q[quadnum].op = (char*)malloc(sizeof(char)*6);
            q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
            q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
            q[quadnum].res = (char*)malloc(sizeof(char)*(res+2));
                q[quadnum].valid=1;
            strcpy(q[quadnum].op,"Label");
                strcpy(q[quadnum].arg1, "NULL");
        strcpy(q[quadnum].arg2, "NULL");

            char jug1[10];
            sprintf(jug1,"%d",res);
            char l1[] = "L";
            strcpy(q[quadnum].res,strcat(l1,jug1));
            quadnum++;
}

void while1()
{
    lnum++;
    printf("L%d: \n",lnum++);
    
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
}

void repeat1()
{
    
    printf("L%d: \n",lnum);
    
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum);
    char l[] = "L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    R[++rep_top]=lnum;
lnum++; 
}


void while2()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    printf("\t%s = not %s\n",temp,stk[tops]);
    q[quadnum].op = (char*)malloc(sizeof(char)*4);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(stk[tops]));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"not");
    strcpy(q[quadnum].arg1,stk[tops]);
    strcpy(q[quadnum].arg2, "NULL");
    strcpy(q[quadnum].res,temp);
    quadnum++;
    printf("\tif %s goto L%d\n",temp,lnum);
    W[++while_top]=lnum++;
    q[quadnum].op = (char*)malloc(sizeof(char)*3);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"if");
    strcpy(q[quadnum].arg1,temp);
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",W[while_top]);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    temp_i++;
 }

void repeat2()
{
if(kk==1)
{
int p,y;
    p=R[rep_top];
    y=R[rep_top-1];

printf("\tgoto L%d \n",y);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;

printf("L%d :\n",p);
q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x1[10];
    sprintf(x1,"%d",p);
    char l1[]="L";
    strcpy(q[quadnum].res,strcat(l1,x1));
    quadnum++;
kk=0;
}
else
{
int p,y;
    y=R[rep_top];
    

printf("\tgoto L%d \n",y);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;



}


    
    
}




void while3()
{
    //printf("%d hai l_while\n",l_while);
    int mera=W[while_top--]-1;
    printf("\tgoto L%d \n",mera);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",mera);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
    printf("L%d: \n",mera+1);lnum++;
    q[quadnum].op = (char*)malloc(sizeof(char)*6);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(lnum+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"Label");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x1[10];
    sprintf(x1,"%d",mera+1);
    char l1[]="L";
    strcpy(q[quadnum].res,strcat(l1,x1));
    quadnum++;
}


void repeat3()
{
    printf("\tgoto L%d \n",lnum);
    q[quadnum].op = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg1 = (char*)malloc(sizeof(char)*5);
    q[quadnum].arg2 = (char*)malloc(sizeof(char)*5);
    q[quadnum].res = (char*)malloc(sizeof(char)*(l_while+2));
    q[quadnum].valid=1;
    strcpy(q[quadnum].op,"goto");
    strcpy(q[quadnum].arg1, "NULL");
    strcpy(q[quadnum].arg2, "NULL");
    char x[10];
    sprintf(x,"%d",lnum);
    char l[]="L";
    strcpy(q[quadnum].res,strcat(l,x));
    quadnum++;
R[++rep_top]=lnum;
lnum++;     
kk=1;
}


int check(char *string)
{
    int x=strlen(string);
    for(int i=0;i<x;i++)
    {
        int j=isdigit(string[i]);
        if(j==0)
        {
            return(0);
        }
    }
    return(1);
}

void optimize_code()
{
    char *targ1,*targ2,*tres,*topr,*res2;
    printf("\n\n");
    int i=0;
    for(i=0;i<quadnum;i++)
    {
        if((!(strcmp(q[i].arg2,"NULL")==0)) && (q[i].valid))
        {
            targ1=(char*)malloc(sizeof(char)*strlen(q[i].arg1));
            targ2=(char*)malloc(sizeof(char)*strlen(q[i].arg2));
            tres=(char*)malloc(sizeof(char)*strlen(q[i].res));
            topr=(char*)malloc(sizeof(char)*strlen(q[i].op));
            strcpy(targ1,q[i].arg1);
            strcpy(targ2,q[i].arg2);
            strcpy(tres,q[i].res);
            strcpy(topr,q[i].op);
            int p=i+1;
            while( p<quadnum && !((strcmp(q[p].res,tres)==0) || (strcmp(q[p].res,targ1)==0) || (strcmp(q[p].res,targ2)==0))  ) 
            {
                if( (strcmp(q[p].arg1,targ1)==0) && (strcmp(q[p].arg2,targ2)==0) && (strcmp(q[p].op,topr)==0) )
                {
                    q[p].valid=0;
                    change=1;
                    res2=(char*)malloc(sizeof(char)*strlen(q[p].res));
                    strcpy(res2,q[p].res);
                    int h=p+1;
                    while(h<quadnum && !(strcmp(q[h].res,res2)==0))
                    {
                        if(strcmp(q[h].arg1,res2)==0)
                        {
                            strcpy(q[h].arg1,tres);
                        }
                        if(strcmp(q[h].arg2,res2)==0)
                        {
                            strcpy(q[h].arg2,tres);
                        }
                        h=h+1;
                    }
                    if(h!=quadnum)
                    {
                        if(strcmp(q[h].arg1,res2)==0)
                        {
                            strcpy(q[h].arg1,tres);
                        }
                        if(strcmp(q[h].arg2,res2)==0)
                        {
                            strcpy(q[h].arg2,tres);
                        }       
                    }
                }
                p=p+1;
            }
            
        }
    }
    printf("\n\n");
    if(change==1)
    {
        printf("Optimized Intermediate Code after common subexpression elimination is:\n\n");
        intermediate_code();
    }
    else
    {
        printf("No common subexpression elimination\n\n\n");
    }



    printf("\n\n");
    i=0;
    change=0;
    for(i=0;i<quadnum;i++)
    {
        if((q[i].valid)&& check(q[i].arg1) && check(q[i].arg2))
        {
            if(strcmp("+",q[i].op)==0 || strcmp("-",q[i].op)==0 || strcmp("/",q[i].op)==0 || strcmp("*",q[i].op)==0)
            {
                
                change=1;
                int x,y,res;
                q[i].valid=0;
                sscanf(q[i].arg1,"%d",&x);
                sscanf(q[i].arg2,"%d",&y);
                if(strcmp(q[i].op,"+")==0)
                {
                    res=x+y;    
                }
                if(strcmp(q[i].op,"-")==0)
                {
                    res=x-y;    
                }
                if(strcmp(q[i].op,"*")==0)
                {
                    res=x*y;    
                }
                if(strcmp(q[i].op,"/")==0)
                {
                    res=x/y;    
                }
                char qw[5]; 
                sprintf(qw, "%d", res);
                tres=(char*)malloc(sizeof(char)*strlen(q[i].res));
                strcpy(tres,q[i].res);
                int p=i+1;
                while(p<quadnum)
                {
                    if(strcmp(tres,q[p].arg1)==0)
                    {
                        strcpy(q[p].arg1,qw);
                    }
                    if(strcmp(tres,q[p].arg2)==0)
                    {
                        strcpy(q[p].arg2,qw);
                    }
                    p=p+1;
                }   
                            
            }
                        
        }
    }
    printf("\n\n");
    if(change==1)
    {
        printf("Optimized Intermediate Code after Constant folding optimization:\n\n");
        intermediate_code();
    }
    else
    {
        printf("No constant folding optimization\n\n\n");
    }       


    printf("\n\n");
    i=0;
    change=0;
    for(i=0;i<quadnum;i++)
    {
        if(q[i].valid &&  strcmp("=",q[i].op)==0 && check(q[i].arg1))
        {
            tres=(char*)malloc(sizeof(char)*strlen(q[i].res));
            strcpy(tres,q[i].res);
            int amt=0;
            for(int j=i+1;j<quadnum;j++)
            {
                if(q[j].valid && (strcmp(tres,q[j].arg1)==0 || strcmp(tres,q[j].arg2)==0 ))
                {
                    amt=1;
                }       
            }
            if(amt==0)
            {
                change=1;
                q[i].valid=0;
            }
                
        }
    }
    printf("\n\n");
    if(change==1)
    {
        printf("Optimized Intermediate Code after Dead code optimization is:\n\n");
        intermediate_code();
    }
    else
    {
        printf("No dead code optimization\n\n\n");
    }       
}

void intermediate_code()
{
    int i;
    for(i=0;i<quadnum;i++)
    {
        if(q[i].valid)
        {
            if(strcmp(q[i].op,"Label")==0)
            {
                printf("%s:\n",q[i].res);
            }
            else if(strcmp(q[i].op,"goto")==0)
            {   
                printf("\tgoto %s\n",q[i].res);
            }
            else if(strcmp(q[i].op,"not")==0)
            {   
                printf("\t%s = not %s\n",q[i].res,q[i].arg1);
            }
            else if(strcmp(q[i].op,"if")==0)
            {   
                printf("\tif %s goto %s\n",q[i].arg1,q[i].res);
            }
            else if(strcmp(q[i].op,"=")==0)
            {   
                printf("\t%s = %s\n",q[i].res,q[i].arg1);
            }
            else
            {
                printf("\t%s = %s %s %s\n",q[i].res,q[i].arg1,q[i].op,q[i].arg2);
            }
                
        }
    }
    display();
}



int main()
{
    yyparse();
    if(valid)
    {
        printf("\n\nParsing successful\n\n");
        
    }
    else
    {
        printf("\n\nParsing unsuccessful\n\n");
        
    }
    display();
    optimize_code();
    return 0;
}        