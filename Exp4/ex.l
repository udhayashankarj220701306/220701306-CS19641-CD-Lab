%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isValid=1;
%}

DIGIT [0-9]
INTEGER [+-]?{DIGIT}+
WS [ \t]
OP [\+\-\*/]
CONST {INTEGER}(\.{DIGIT}+)? 
 /*EXP ({CONST}{OP}{CONST})({OP}{CONST})*? */
OBAC [(]
CBAC [)]

%%

{WS}   {}
{OP}{CBAC}|{OBAC}{OP}|{CONST}{OBAC}|{CBAC}{CONST}|{OP}{OP}|^{OP}|{OP}$ {isValid=0;}
"\n" {return 0;}
%%
int yywrap(void){}
int main(){
yylex();
if(isValid){
printf("Valid Arithmetic Expression");
}
else{
printf("Invalid Arithmetic Expression");
}

return 0;
}
