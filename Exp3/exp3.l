%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int kw=0,id=0,cn=0,op=0,cm=0,ss=0;
%}
LETTER [a-zA-Z]
DIGIT [0-9]
INTEGER [+-]?{DIGIT}+
WS [ \t\n]
US [_]
SLC "//".*
MLC "/*".*"/*"
%%

{WS}   {}
"auto"|"break"|"case"|"char"|"const"|"continue"|"default"|"do"|"double"|"else"|"enum"|"extern"|"float"|"for"|"goto"|"if"|"int"|"long"|"register"|"short"|"signed"|"sizeof"|"static"|"struct"|"switch"|"typeof"|"union"|"unsigned"|"void"|"volatile"|"while" {kw++;}
[\+\-=!\*/|&<>%][=\+\-\*/|&]? {op++;}
{INTEGER}(\.{DIGIT}+)? {cn++;}
({LETTER}|{US})({LETTER}|{DIGIT}|{US})* {id++;}
({SLC}|{MLC}) {cm++;}
[\{\}\(\)\[\];,"] {ss++;}
"\n\n" {printf("Keyword: %d\nIdentifer: %d\nConstant: %d\nOperator: %d\nComments: %d\nSpecial Symbol: %d\n",kw,id,cn,op,cm,ss);kw=0;id=0;cn=0;op=0;cm=0;ss=0;}
%%
int yywrap(void){}
int main(){
yylex();
return 0;
}
