%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *msg);
int yylex(void);
%}
%token ID NUM FOR LE GE EQ NE AND OR IF ELSE WHILE SWITCH CASE BREAK DEFAULT
%right '='
%left OR AND
%left '+' '-'
%left '*' '/'
%right UMINUS
%left '!'
%%

F : S '\n' {printf("INPUT ACCEPTED\n\n");exit(0);};


S : FOR '(' E ';' C ';' E ')' DEF	
	| WHILE '(' C ')' DEF
	| IC
	| SC
	;
	
SC : SWITCH '(' ID ')' '{' B '}'
	; 
B : CASES
	|CASES D
	;
CASES : CASES CASES
	| CASE NUM ':' BODY BREAK ';'
	;
D : DEFAULT ':' BODY BREAK ';'
	| DEFAULT ':' BODY
	;
	
	
IC : IFS 
	| IFS ELSES
	| IFS ELIF
	| IFS ELIF ELSES
	;
IFS : IF '(' C ')' DEF 
	;
ELSES : ELSE DEF
	;
ELIF : ELSE IFS
	| ELIF ELIF
	;



DEF : '{' BODY '}'
	| E ';'
	| S
	|
	;

BODY : BODY BODY
	| E ';'
	| S
	|
	;
	;
E : ID '=' E
	| E '+' E
	| E '-' E
	| E '*' E
	| E '/' E
	| E '>' E
	| E '<' E
	| E LE E
	| E GE E
	| E EQ E
	| E NE E
	| E OR E
	| E AND E
	| E '+''+'
	| E '-''-' 
	| '!' E
	| ID
	| NUM
	;
C :  E '<' E
	| E '>' E
	| E LE E
	| E GE E
	| E EQ E
	| E NE E
	| E OR E
	| E AND E
	;
%%
void  yyerror(const char *msg){
  printf("Invalid equation or expression: %s\n",msg);
}

int main(){
  printf("Enter a Control Structure: \n");  
  yyparse();
  printf("\nEntered code is invalid\n");
  return 0;
}
