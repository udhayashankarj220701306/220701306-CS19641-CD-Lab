%{
#include <stdio.h>
void yyerror(const char *s);
int yylex(void);
extern char *yytext;
void yyerror(const char *msg);

%}
%token IDENTIFIER
%%
stmt: IDENTIFIER {printf("Valid variable: %s\n",yytext);}
  ;
%%
void  yyerror(const char *s){
  printf("Invalid Variable\n");
}

int main(){
  printf("Enter a variable name: ");  
  yyparse();
  return 0;
}

