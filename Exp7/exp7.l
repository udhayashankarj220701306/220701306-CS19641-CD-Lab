%{
#include "y.tab.h"
%}

LETTER [a-zA-Z]
DIGIT [0-9]

%%
[\t ] ;
"for" {return FOR;}
"while" {return WHILE;}
"if" {return IF;}
"else" {return ELSE;}
"switch" {return SWITCH;}
"case" {return CASE;}
"break" {return BREAK;}
"default" {return DEFAULT;}
{LETTER}({LETTER}|{DIGIT})* {return ID;}
{DIGIT}+ {return NUM;}
"<=" {return LE;}
">=" {return GE;}
"==" {return EQ;}
"!=" {return NE;}
"||" {return OR;}
"&&" {return AND;}
.|\n {return yytext[0];}
%%

int yywrap(void){}
