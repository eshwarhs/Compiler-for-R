%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int valid=1;
int yylex();	
extern char* yytext;
typedef struct Abstract_syntax_tree
{
    char *name;
    struct Abstract_syntax_tree *left;
    struct Abstract_syntax_tree *right;
}node;
node* buildTree(char *,node *,node *);
void printTree(node *);
int yyerror(const char *s);
extern int yylineno;
extern char* yytext;
char varname[20];
int flag=0;
int stat_c=1;
char sc[20];
#define YYSTYPE struct Abstract_syntax_tree *
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
%token T_BREAK
%token T_REPEAT
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

Q:	S {printf("\n\t\tAbstract Syntax Tree\n\n");printTree1($1); printf("\n\n\t\tAbstract Syntax Tree v2\n\n"); printTree($1);}
	;

S: 	WHILE S {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$1,$2);}
	| IF S  {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$1,$2);}
	| REPEAT S {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$1,$2);}
	| BREAK S{sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$1,$2);}
	| EXP S {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$1,$2);}
	| T_PRINT '('ITEM')' T_NL S {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$3,$6);}
	| T_CO N S T_CC T_NL S {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$3,$6);}
	| error T_NL S {sprintf(sc,"Statement%d",stat_c++); $$ = buildTree(sc,$1,$3);}
	| {$$ = NULL;}
	;

WHILE :	T_WHILE N '(' N COND N')' N T_CO N S T_CC T_NL {$$ = buildTree("while",$5,$11);}
	;


REPEAT : T_REPEAT N T_CO N S T_CC T_NL{$$ = buildTree("repeat",$5,NULL);}
	;

BREAK : T_BREAK T_NL{$$ = buildTree("break",NULL,NULL);}
	;


IF :	 T_IF N '('  N COND N  ')' N  T_CO NIF {$$ = buildTree("if",$5,$10);}
	;

NIF :  N S T_CC T_NL {$$ = buildTree("in if",$2,NULL);}
	|N S T_CC T_NL E {$$ = buildTree("inif",$2,$5);}
	;	


E :	T_ELSE N  T_IF N '(' N COND N ')' N T_CO N S T_CC T_NL E {$$ = buildTree("elseif",buildTree("if",$7,$13),$16);}
	| T_ELSE N T_CO N S T_CC T_NL{$$ = buildTree("in if",$2,NULL);} {$$ = buildTree("else",$5,NULL);}
	;

EXP :	K RELOP K T_NL{$$ = buildTree($2,$1,$3);}
	| ID ASSIGNOP K T_NL {$$ = buildTree($2,$1,$3);}
	| K T_NL{$$=$1;}
	;

COND :	K RELOP K {$$ = buildTree($2,$1,$3);}
	| ID ASSIGNOP K {$$ = buildTree($2,$1,$3);}
	| K LOGICOP K   {$$ = buildTree($2,$1,$3);}
	| K {$$ = $1;}
	;

K: 	K T_ADD L {$$ = buildTree("+",$1,$3);}
	| K T_SUB L {$$ = buildTree("-",$1,$3);}
	| L {$$=$1;}
	;
	
L: 	L T_MUL M {$$ = buildTree("*",$1,$3);}
	| L T_DIV M {$$ = buildTree("/",$1,$3);}
	| M {$$ = $1;}
	;

M: 	M T_MOD O {$$ = buildTree("%",$1,$3);}
	| M T_MMOD O {$$ = buildTree("mmod",$1,$3);}
	| O{$$=$1;}
	;

O: 	ID {$$ = $1;}
	| NUM {$$ =$1;}
	|'('K')' {$$ = buildTree("exp",$2,NULL);}
	| ID'['INDEX']' {$$ = buildTree("array",$1,$3);}
	;

INDEX: 	NUM','INDEX {$$ = buildTree(",",$1,$3);}
	|ID','INDEX {$$ = buildTree(",",$1,$3);}
	|NUM {$$ = $1;}
	|ID	 {$$ = $1;}
	;

RELOP:	T_LT { $$ = "<";}
	|T_GT  { $$ = ">";}
	|T_EE  { $$ = "==";}
	|T_LE  { $$ = "<=";}
	|T_GE  { $$ = ">=";}
	|T_NE  { $$ = "!=";}
	;

ASSIGNOP:T_EQ{$$="=";}
	|T_LA{$$="=";}
	|T_RA{$$="=";}
	; 

LOGICOP: T_AND{$$="&&";}
	| T_OR{$$="||";}
	;

	
ITEM: 	NUM {$$=$1;}
	| BOOL {$$=$1;}
	| STR {$$=$1;}
	| PASTE {$$=$1;}
	| ID{$$=$1;}
	;

PASTE: 	T_PASTEO'('PASTEIN')'{$$ = buildTree("paste0",$3,NULL);}
	;


PASTEIN: STR ',' PASTEIN {$$ = buildTree("paste0",$3,NULL);}
	| ID','PASTEIN  {$$ = buildTree(",",$1,$3);}
	|{$$ = NULL;} ;

N:	T_NL
	|
	;

NUM: 	T_NUM {$$ = buildTree(yytext,NULL,NULL);}
	;

BOOL: 	T_TRUE {$$ = buildTree(yytext,NULL,NULL);}
	| T_FALSE{$$ = buildTree(yytext,NULL,NULL);}
	;

STR: 	T_STR {$$ = buildTree(yytext,NULL,NULL);}
	;

ID: 	T_ID {$$ = buildTree(yytext,NULL,NULL);}
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

int main()
{
	yyparse();
	if(valid)
	{
  		printf("Parsing successful\n\n");
		
	}
	else
	{
  		printf("Parsing unsuccessful\n\n");
		
	}
	
	return 0;
}        

node* buildTree(char *op, node *left, node *right)
{
	node *new = (node*)malloc(sizeof(node));
	char *newstr = (char *)malloc(strlen(op)+1);
	strcpy(newstr,op);
	new->left = left;
	new->right = right;
	new->name = newstr;
    /*
    printf("root : %s\n", new->name);
    if(!new->left)
        printf("left node of %s is null\n", new->name);
    else
        printf("left node of %s is %s\n", new->name, new->left->name);
    if(!new->right)
        printf("right node of %s is null\n", new->name);
    else
        printf("right node of %s is %s\n", new->name, new->right->name);
    */
	return new;
}

void printTree(node *tree)
{
	if(tree!=NULL && (tree->left!=NULL || tree->right!=NULL))
	{
		
		printf("%s\n",tree->name);
		if(tree->left!=NULL)
			printf("%s\t", tree->left->name);
		else
			printf("NULL\t");

		if(tree->right!=NULL)
			printf("%s\n\n", tree->right->name);
		else
			printf("NULL\n\n");

		printTree(tree->left);
		printTree(tree->right);
		
	}
}


void printTree1(node *tree)
{
	if(tree->left || tree->right)
		printf("(");
	printf(" %s ",tree->name);
	if(tree->left)
		printTree1(tree->left);
	if(tree->right)
		printTree1(tree->right);
	if(tree->left || tree->right)
		printf(")");
}

  
