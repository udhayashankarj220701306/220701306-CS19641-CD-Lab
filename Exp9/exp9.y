%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *msg);
int yylex(void);
%}
%token ID NUM
%right '='
%left '+' '-'
%left '*' '/'
%%

CODE : ID '=' ID '+' ID '\n' {
		printf("MOV AX,[%s]\n",$1);
		printf("ADD AX,[%s]\n",$2);
		printf("MOV [%s],AX\n",$0);
	}
	| ID '=' ID '-' ID '\n' {
                printf("MOV AX,[%s]\n",$1);
                printf("SUB AX,[%s]\n",$2);
                printf("MOV [%s],AX\n",$0);
        }

	| ID '=' ID '*' ID '\n' {
                printf("MOV AX,[%s]\n",$1);
		printf("MOV BX,[%s]\n",$2);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$0);
        }

	| ID '=' ID '/' ID '\n' {
                printf("MOV AX,[%s]\n",$1);
		printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",$2);
		printf("DIV BX\n");
                printf("MOV [%s],AX\n",$0);
        }

	| ID '=' NUM '+' ID '\n' {
                printf("MOV AX,%s\n",$1);
                printf("ADD AX,[%s]\n",$2);
                printf("MOV [%s],AX\n",$0);
        }

        | ID '=' NUM '-' ID '\n' {
                printf("MOV AX,%s\n",$1);
                printf("SUB AX,[%s]\n",$2);
                printf("MOV [%s],AX\n",$0);
        }

        | ID '=' NUM '*' ID '\n' {
                printf("MOV AX,%s\n",$1);
                printf("MOV BX,[%s]\n",$2);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$0);
        }


        | ID '=' NUM '/' ID '\n'  {
                printf("MOV AX,%s\n",$1);
                printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",$2);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",$0);
        }


	| ID '=' ID '+' NUM '\n' {
                printf("MOV AX,[%s]\n",$1);
                printf("ADD AX,%s\n",$2);
                printf("MOV [%s],AX\n",$0);
        }

        | ID '=' ID '-' NUM '\n' {
                printf("MOV AX,[%s]\n",$1);
                printf("SUB AX,%s\n",$2);
                printf("MOV [%s],AX\n",$0);
        }

        | ID '=' ID '*' NUM '\n' {
                printf("MOV AX,[%s]\n",$1);
                printf("MOV BX,%s\n",$2);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$0);
        }


        | ID '=' ID '/' NUM '\n'  {
                printf("MOV AX,%s\n",$1);
                printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",$2);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",$0);
        }


	| ID '=' ID  '\n' {
                printf("MOV [%s],[%s]\n",$0,$1);
        }

	| ID '=' NUM '\n' {
                printf("MOV [%s],%s\n",$0,$1);
        }
%%
void  yyerror(const char *msg){
  printf("Invalid Three code: %s\n",msg);
}

int main(){
  printf("Enter a Three Code: \n");  
  yyparse();
  printf("\nEntered code is invalid\n");
  return 0;
}

