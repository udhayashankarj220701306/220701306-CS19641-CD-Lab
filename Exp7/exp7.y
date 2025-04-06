%{
#include <stdio.h>
void yyerror(const char *msg);
extern char *yytext;
int is_valid = 1;
%}
%token ID NUM AOP ROP LOP OP CP OC CC SEMICOLON FOR IF ELSE WHILE SWITCH CASE BREAK DEFAULT
%right '='
%left LOP
%left ROP
%left '+' '-'
%left '*' '/'
%right UMINUS
%left '!'
%%

PROGRAM : CS {printf("Input accepted");exit(0);};
	
CS : FOR OP E SEMICOLON C SEMICOLON E CP DEF
	| WHILE OP C CP DEF
	| IC
	|SC
	;
	
SC : SWITCH OP ID CP OC B CC
	; 
B : CASES
	|D
	;
CASES : CASES CASES
	| CASE NUM ':' BODY BREAK SEMICOLON
	;
D : DEFAULT ':' BODY BREAK SEMICOLON
	| DEFAULT ':' BODY
	;
	
IC : IFS 
	| IFS ELSES
	| IFS ELIF
	| IFS ELIF ELSES
	;
IFS : IF OP C CP DEF {printf("Input accepted");exit(0);};
ELSES : ELSE DEF;
ELIF : ELSE IFS
	|ELIF ELIF
	;


	
DEF : OC BODY CC
	| E SEMICOLON
	| CS
	|
	;

BODY : E SEMICOLON
	| CS
	| BODY BODY
	|
	;
E : ID '=' E
	| E AOP E
	| E LOP E
	| E ROP E
	| E '+''+'
	| E '-''-' 
	| '!' E
	| ID
	| NUM
	;
C :  E LOP E
	| E ROP E {printf("Input accepted");exit(0);}
	;
zOP : AOP {printf("Input accepted");exit(0);};


%%
void  yyerror(const char *msg){
  printf("Invalid Input\n");
}

int main(){
  printf("Enter a Control Structure: \n");  
  yyparse();
  return 0;
}

