%{
#include "y.tab.h"
%}
%%
[\t ] ;
[a-zA-Z][a-zA-Z0-9_]* {return ID; }
[0-9]+ {return NUM;}
.|\n {return yytext[0];}
%%

int yywrap(void){}
