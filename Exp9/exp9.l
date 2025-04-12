%{
#include<stdio.h>
#include<string.h>
#include "y.tab.h"
%}
%%
[\t ] ;
[a-zA-Z][a-zA-Z0-9_]* {strcpy(yylval.s,yytext);return ID; }
[0-9]+ {yylval.n=atof(yytext);return NUM;}
.|\n {return yytext[0];}
%%

int yywrap(void){}
