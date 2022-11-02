%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KRED  "\x1B[31m"
#define KWHT  "\x1B[37m"
int valid=1;
int yylex();	
extern char* yytext;
int yyerror(const char *s);
int st[100];
int top;
int count;
int symcount=-1;
void insertIntoSym(char *text,int nm,int scpl ,int check );
void func(char *text,int val,int scp);
void display();
int idval;
extern int yylineno;
extern char* yytext;
char varname[20];int cflag=0;
int flag=0;
%}

%define parse.error verbose
%start Q
%token T_LIBRARY
%token T_NL
%token T_PRINT
%token T_WHILE
%token T_IF
%token T_IN
%token T_ELSE
%token T_BY
%token T_BREAK
%token T_REPEAT
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

Q:	S
	;

S: 	WHILE S 
	| IF S 
	| {cflag=1;} EXP S 
	| REPEAT S
	| BREAK S
	| T_PRINT '('ITEM')' T_NL S
	| T_CO {count=count+1;top=top+1;st[top]=count;} N S T_CC{top=top-1;} T_NL S
	| error T_NL S
	|
	;

WHILE :	T_WHILE N '(' N COND N')' N T_CO{count=count+1;top=top+1;st[top]=count;} N S T_CC{top=top-1;} T_NL
	;



IF :	 T_IF N '('  N COND N  ')' N  T_CO {count=count+1;top=top+1;st[top]=count;} NIF  
	;

NIF :  N S T_CC T_NL{top=top-1;}
	| N S T_CC T_NL E{top=top-1;}
	;	

REPEAT : T_REPEAT N T_CO{count=count+1;top=top+1;st[top]=count;} N S T_CC{top=top-1;} T_NL
	;

BREAK : T_BREAK T_NL
	;

E :	T_ELSE N  T_IF N '(' N COND N ')' N T_CO {count=count+1;top=top+1;st[top]=count;} N S T_CC {top=top-1;} T_NL E 
	| T_ELSE N T_CO{count=count+1;top=top+1;st[top]=count;} N S T_CC{top=top-1;} T_NL
	;

EXP :	K RELOP K T_NL
	| ID ASSIGNOP K T_NL{func(varname,$3,st[top]);} 
	| K T_NL
	;

COND :	K RELOP K 
	| ID ASSIGNOP K {func(varname,$3,st[top]);}
	| K LOGICOP K
	| K 
	;

K: 	K T_ADD L {$$=$1+$3;}
	| K T_SUB L {$$=$1-$3;}
	| L {$$=$1;}
	;
	
L: 	L T_MUL M {$$=$1*$3;}
	| L T_DIV M {$$=$1/$3;}
	| M {$$=$1;}
	;

M: 	M T_MOD O 
	| M T_MMOD O 
	| O{$$=$1;}
	;

O: 	ID {$$=0;func(varname,0,st[top]);}
	| NUM {$$=$1;}
	|'('K')' 
	| ID'['INDEX']'
	;

INDEX: 	NUM','INDEX
	|ID','INDEX 
	|NUM 
	|ID
	;

RELOP:	T_LT
	|T_GT
	|T_EE
	|T_LE
	|T_GE
	|T_NE
	;

ASSIGNOP:T_EQ
	|T_LA
	|T_RA
	; 

LOGICOP: T_AND
	| T_OR
	;



	
ITEM: 	NUM 
	| BOOL 
	| STR 
	| PASTE 
	| ID
	;

PASTE: 	T_PASTEO'('PASTEIN')'
	;


PASTEIN: STR ',' PASTEIN 
	| ID','PASTEIN  
	| ;

N:	T_NL
	|
	;

NUM: 	T_NUM
	;

BOOL: 	T_TRUE 
	| T_FALSE
	;

STR: 	T_STR
	;

ID: 	T_ID{insertIntoSym(yytext,yylineno,st[top],cflag);strcpy(varname,yytext);}
	;

%%

#include <ctype.h>
int yyerror(const char *s)
{
  	extern int yylineno;
  	valid =0;
	//display();
  	printf("\n%sERROR: %s on Line %d\n\n%s",KRED,s,yylineno-1,KWHT);
}

struct var
{
	int d;
	char c[20];
	char l[100];
	int scope;
	int val;
};

struct var symtab[100];


void insertIntoSym(char *text,int nm,int scp, int check)
{
	if(check==0)
	{
	int pre=0;
		for(int i=0;i<=symcount;i++)
		{
			if(strcmp(symtab[i].c,text)==0 )
			{
				pre=1;
			}
		}
		if(pre==0)
		{
			valid=0;
			printf("\n%sERROR: Undeclared variable %s on Line %d\n\n%s",KRED,text,nm,KWHT);
		}
	}
	else
	{
		cflag=0;
	}
	int present=0;
	for(int i=0;i<=symcount;i++)
	{
		if(strcmp(symtab[i].c,text)==0 && symtab[i].scope==scp)
		{
			char buffer[20];
			sprintf(buffer,"%d",nm);
			present=1;
			if(strstr(symtab[i].l,buffer)==NULL)
			{
				strcat(symtab[i].l,",");
				strcat(symtab[i].l,buffer);	
			}
			symtab[i].scope=scp;		
			break;
		}
	}
	if(present==0)
	{
		symcount++;
		char buffer[20];
		sprintf(buffer,"%d",nm);
		int p=symcount;
		symtab[p].d=p;
		strcpy(symtab[p].c,text);
		strcpy(symtab[p].l,"");
		strcat(symtab[p].l,buffer);
		symtab[p].scope=scp;
		symtab[p].val=0;
	}
}

void display()
{
	printf("\n\nSymbol Table\n");
	printf("| ID   | Symbol   | Value    | Scope    | Line number        |\n");
	printf("--------------------------------------------------------------\n");
	for(int i=0;i<=symcount;i++)
	{
		printf("| %5d|%10s|%10d|%10d|%20s|\n",symtab[i].d,symtab[i].c,symtab[i].val,symtab[i].scope,symtab[i].l);
	}
	printf("--------------------------------------------------------------\n");	
}

void func(char *text,int val,int scp)
{
	for(int i=0;i<=symcount;i++)
	{
		if((strcmp(symtab[i].c,text)==0) && symtab[i].scope==scp) 
		{
			if(val!=0)
			{
				symtab[i].val=val;		
				break;
			}
		}
	}
}

int main()
{
	st[0]=0;
	top=0;
	count=0;
	printf("The tokens generated are:\n\n");
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
	
	return 0;
}
