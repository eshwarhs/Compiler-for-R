
all:
	lex code.l 
	yacc -d -v code.y 
	gcc y.tab.c lex.yy.c -w -o ast
