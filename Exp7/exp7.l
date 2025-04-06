%{
#include "y.tab.h"
%}
%option noyywrap

LETTER [a-zA-Z]
DIGIT [0-9]
INTEGER [+-]?{DIGIT}+
US [_]

%%
"case" { return CASE;}
"else" { return ELSE;}
"for" {return FOR;}
"if" {return IF;}
"switch" {return SWITCH;}
"while" {return WHILE;}
"break" {return BREAK;}
"default" {return DEFAULT;}
({LETTER}|{US})({LETTER}|{DIGIT}|{US})*  {return ID;}
([\+\-\*/%][=]?) {return AOP;}
([><][=]?|[=!][=]) {return ROP;}
("||"|"&&") {return LOP;}
{INTEGER}(\.{DIGIT}+)? {return NUM;}
" " ;
"(" {return OP;}
")" {return CP;}
"{" {return OC;}
"}" {return CC;}
":" {return SEMICOLON;}
.|\n {return yytext[0];}
%%
