%option yylineno
%{

    #include "y.tab.h"
	#include <stdio.h>
	#include <stdlib.h>
    	

	
%}
	

%%
#(.*)\n ; 
[ \t] ; 
(\n)+													{return T_NL;}
library  												{return T_LIBRARY;}
print 													{return T_PRINT;}
while 													{return T_WHILE;}
if 														{return T_IF;}
else 													{return T_ELSE;}
in 														{return T_IN;}
by 														{return T_BY;}
break													{return T_BREAK;}
repeat 													{return T_REPEAT;}
length.out 												{return T_LENGTHOUT;}
"c(" 													{return T_COPEN;}
"seq(" 													{return T_SEQOPEN;}
"<=" 													{return T_LE;}
">=" 													{return T_GE;}
"==" 													{return T_EE;}
"!=" 													{return T_NE;}
"->" 													{return T_RA;}
"<-" 													{return T_LA;}
"+" 													{return T_ADD;}
"-" 													{return T_SUB;}
"*" 													{return T_MUL;}
"/" 													{return T_DIV;}
"<" 													{return T_LT;}
">" 													{return T_GT;}
"=" 													{return T_EQ;}
"&&" 													{return T_AND;}
"||" 													{return T_OR;}
"{" 													{return T_CO;}
"}" 													{return T_CC;}
paste0 													{return T_PASTEO;}
[0-9]+ 													{return T_NUM;}
TRUE 													{return T_TRUE;}
FALSE 													{return T_FALSE;}
"%%" 													{return T_MOD;}
"%/%" 													{return T_MMOD;}
\".*\" 													{return T_STR;}
\.[a-zA-Z_]([a-zA-Z0-9_.])*|[a-zA-Z]([a-zA-Z0-9_.])* 	{return T_ID;}

. {return yytext[0];}
%%


int yywrap()
{
return 1;
}
