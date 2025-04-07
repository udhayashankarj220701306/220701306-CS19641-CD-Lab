%{
#include <stdio.h>
void yyerror(const char *msg);
extern char *yytext;
int is_valid = 1;
%}
%token ID NUM OP CP OC CC SC LE GE EQ NE AND OR INC DEC FOR IF ELSE WHILE SWITCH CASE BREAK DEFAULT
%right '='
%left OR AND
%left '>' '<' LE GE EQ NE
%left '+' '-'
%left '*' '/' '%'
%right UMINUS
%left '!' INC DEC
%%

/* PROGRAM : CS {printf("Input accepted");exit(0);}; */
	
/* CS : FOR OP E SEMICOLON C SEMICOLON E CP DEF | WHILE OP C CP DEF | IC | SC ; */
	
/* SC : SWITCH OP ID CP OC B CC ; */
/* B : CASES | D ; */
/* CASES : CASES CASES | CASE NUM ':' BODY BREAK SEMICOLON ; */
/* D : DEFAULT ':' BODY BREAK SEMICOLON | DEFAULT ':' BODY ;* /
	
/* IC : IFS | IFS ELSES | IFS ELIF | IFS ELIF ELSES ; */
/* IFS : IF OP C CP DEF {printf("Input accepted");exit(0);}; */
/* ELSES : ELSE DEF; */
/* ELIF : ELSE IFS | ELIF ELIF ; */
	
/* DEF : OC BODY CC | E SEMICOLON | CS | 	; */

/* BODY : E SEMICOLON | CS	| BODY BODY |	; */
ETEST : E  {printf("Input accepted\n");exit(0);};
E : ID '=' E | E '+' E |  E '-' E |  E '*' E |  E '/' E |  E '%' E | E '<' E | E '>' E | E LE E | E GE E | E NE E | E EQ E | E OR E | E AND E | E INC | E DEC  | '!' E | '-'E | ID | NUM ; 
/* C :  E LOP E | E ROP E {printf("Input accepted");exit(0);} ; */


%%
void  yyerror(const char *msg){
  printf("Invalid Input\n");
}

int main(){
  printf("Enter a Control Structure: \n");  
  yyparse();
  return 0;
}

