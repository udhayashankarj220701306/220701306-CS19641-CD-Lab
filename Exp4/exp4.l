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
EXP {CONST}{OP}{CONST}({OP}{CONST})*?
OBAC [(]
CBAC [)]
VEXP {EXP}|{OBAC}{EXP}{CBAC}

%%

{WS} {}

 /*{VEXP} {printf("Valid Arithmetic Expression");}
.* {printf("Invalid Arithmetic Expression");}*/
 
{OP}{WS}*{CBAC} {printf("Error : Close Parenthesis after Operator\n");isValid=0;}
{OBAC}{WS}*{OP} {printf("Error : Operator after Open Parenthesis\n");isValid=0;}
{CONST}{WS}*{OBAC} {printf("Error : Open Parenthesis after Number\n");isValid=0;}
{CBAC}{WS}*{CONST} {printf("Error : Number after Close Parenthesis\n");isValid=0;}
{OP}{WS}*[\*/]|{OP}{WS}*{OP}{WS}*{OP} {printf("Error : Consecutive Operator\n");isValid=0;}
^{OP} {printf("Error : Start with Operator\n");isValid=0;}
{OP}$ {printf("Error : Ends with Operator\n");isValid=0;}
"\n" {if(isValid==1){
printf("Valid Arithmetic Expression\n");
}
else{
printf("Invalid Arithmetic Expression\n");
}isValid=1;}
%%
int yywrap(void){}
int main(){
yylex();


return 0;
}
