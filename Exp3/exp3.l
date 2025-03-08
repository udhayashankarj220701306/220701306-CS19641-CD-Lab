%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int kw=0,id=0,cn=0,op=0,cm=0,ss=0;
%}
%%
([0-9]+|/.[0-9]*) {cn++;}
auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short {kw++;}
([a-zA-Z][0-9])+|[a-zA-Z]* {id++;}
[+-/=*%] {op++}
(//[a-zA-Z0-9!@#$%^&*()_-+={}[]:";'?><,./]*|/\*[a-zA-Z0-9!@#$%^&*()_-+={}[]:";'?><,./]*\*/) {cm++;}
["';,{}[]()] {ss++;}
"\n\n"{printf("Keyword: %d\nIdentifer: %d\nConstant: %d\nOperator: %d\nComments: %d\nSpecial Symbol: %d\n",kw,id,cn,op,cm,cc);kw=0;id=0;cn=0;op=0;cm=0;ss=0}
%%
int yywrap(void){}
int main(){
yylex();
return 0;
}
