%{
#include<stdio.h>
#include<string.h>
#include "y.tab.h"
%}
%%
[ \n\t]+ ;
main {return MAIN;}
"for" {return FOR;}
"while" {return WHILE;}
"if" {return IF;}
"else" {return ELSE;}
"switch" {return SWITCH;}
"case" {return CASE;}
"break" {return BREAK;}
"default" {return DEFAULT;}
"<=" {return LE;}
">=" {return GE;}
"==" {return EQ;}
"!=" {return NE;}
"||" {return OR;}
"&&" {return AND;}
int|float|double|char {strcpy(yylval.string,yytext); return TYPE; }
[a-zA-Z][a-zA-Z0-9_]* {strcpy(yylval.string,yytext); return ID; }
[0-9]+ |
[0-9]+\.[0-9]+ {
yylval.dval=atof(yytext);
return NUM;
}
. return yytext[0];
%%
int yywrap(){
return 1;
}

