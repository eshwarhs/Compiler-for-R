%option yylineno
%{
    #include "y.tab.h"
	#include <stdio.h>
	#include <stdlib.h>
%}
	

%%
#(.*)\n ; 
[ \t] ; 
(\n)+																			{return T_NL;}
library  																	{printf("< T_KEYWORD ,\t library ,\t %d >\n",yylineno);return T_LIBRARY;}
print 																		{printf("< T_KEYWORD ,\t print ,\t %d >\n",yylineno);return T_PRINT;}
while 																		{printf("< T_KEYWORD ,\t while ,\t %d >\n",yylineno);return T_WHILE;}
if 																			{printf("< T_KEYWORD ,\t if ,\t %d >\n",yylineno);return T_IF;}
else 																		{printf("< T_KEYWORD ,\t else ,\t %d >\n",yylineno);return T_ELSE;}
in 																			{printf("< T_KEYWORD ,\t in ,\t %d >\n",yylineno);return T_IN;}
by 																			{printf("< T_KEYWORD ,\t by ,\t %d >\n",yylineno);return T_BY;}
break																		{printf("< T_KEYWORD ,\t break ,\t %d >\n",yylineno);return T_BREAK;}
repeat 																		{printf("< T_KEYWORD ,\t repeat ,\t %d >\n",yylineno);return T_REPEAT;}
length.out 																	{printf("< T_KEYWORD ,\t length.out ,\t %d >\n",yylineno);return T_LENGTHOUT;}
"c(" 																		{return T_COPEN;}
"seq(" 																		{return T_SEQOPEN;}
"<=" 																		{printf("< T_OP ,\t <= ,\t %d >\n",yylineno);return T_LE;}
">=" 																		{printf("< T_OP ,\t >= ,\t %d >\n",yylineno);return T_GE;}
"==" 																		{printf("< T_OP ,\t == ,\t %d >\n",yylineno);return T_EE;}
"!=" 																		{printf("< T_OP ,\t != ,\t %d >\n",yylineno);return T_NE;}
"->" 																		{printf("< T_OP ,\t -> ,\t %d >\n",yylineno);return T_RA;}
"<-" 																		{printf("< T_OP ,\t <- ,\t %d >\n",yylineno);return T_LA;}
"+" 																		{printf("< T_OP ,\t + ,\t %d >\n",yylineno);return T_ADD;}
"-" 																		{printf("< T_OP ,\t - ,\t %d >\n",yylineno);return T_SUB;}
"*" 																		{printf("< T_OP ,\t * ,\t %d >\n",yylineno);return T_MUL;}
"/" 																		{printf("< T_OP ,\t / ,\t %d >\n",yylineno);return T_DIV;}
"<" 																		{printf("< T_OP ,\t < ,\t %d >\n",yylineno);return T_LT;}
">" 																		{printf("< T_OP ,\t > ,\t %d >\n",yylineno);return T_GT;}
"=" 																		{printf("< T_OP ,\t = ,\t %d >\n",yylineno);return T_EQ;}
"&&" 																		{printf("< T_OP ,\t && ,\t %d >\n",yylineno);return T_AND;}
"||" 																		{printf("< T_OP ,\t || ,\t %d >\n",yylineno);return T_OR;}
"{" 																		{printf("< T_PUN ,\t { ,\t %d >\n",yylineno);return T_CO;}
"}" 																		{printf("< T_PUN ,\t } ,\t %d >\n",yylineno);return T_CC;}
paste0 																		{printf("< T_KEYWORD ,\t paste0 ,\t %d >\n",yylineno);return T_PASTEO;}
[0-9]+ 																		{printf("< T_CON ,\t %s ,\t %d >\n",yytext,yylineno);yylval = atoi(yytext);return T_NUM;}
TRUE 																		{printf("< T_KEYWORD ,\t TRUE ,\t %d >\n",yylineno); return T_TRUE;}
FALSE 																		{printf("< T_KEYWORD ,\t FALSE ,\t %d >\n",yylineno); return T_FALSE;}
"%%" 																		{printf("< T_OP ,\t %%%% ,\t %d >\n",yylineno);return T_MOD;}
"%/%" 																		{printf("< T_OP ,\t %%/%% ,\t %d >\n",yylineno);return T_MMOD;}
\".*\" 																		{printf("< STRING , %s , %d >\n",yytext,yylineno);return T_STR;}
\.[a-zA-Z_]([a-zA-Z0-9_.])*|[a-zA-Z]([a-zA-Z0-9_.])* 						{return T_ID;}

. 																			{return yytext[0];}
%%


int yywrap()
{
	return 1;
}
