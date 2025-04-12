%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *msg);
int yylex(void);
%}
%union{
	char s[3];
	double n;
}
%token <s> ID 
%token <n> NUM
%right '='
%left '+' '-'
%left '*' '/'
%%

list:                       
         |
        list CODE '\n'
         |
        list error '\n'
         {
           yyerrok;
         }
         ;

CODE : ID '=' ID '+' ID  {
		printf("MOV AX,[%s]\n",$3);
		printf("ADD AX,[%s]\n",$5);
		printf("MOV [%s],AX\n",$1);
		
	}
	| ID '=' ID '-' ID {
                printf("MOV AX,[%s]\n",$3);
                printf("SUB AX,[%s]\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

	| ID '=' ID '*' ID {
                printf("MOV AX,[%s]\n",$3);
		printf("MOV BX,[%s]\n",$5);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$1);
        }

	| ID '=' ID '/' ID {
                printf("MOV AX,[%s]\n",$3);
		printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",$5);
		printf("DIV BX\n");
                printf("MOV [%s],AX\n",$1);
        }

	| ID '=' NUM '+' ID {
                printf("MOV AX,#%lf\n",$3);
                printf("ADD AX,[%s]\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

        | ID '=' NUM '-' ID {
                printf("MOV AX,#%lf\n",$3);
                printf("SUB AX,[%s]\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

        | ID '=' NUM '*' ID {
                printf("MOV AX,#%lf\n",$3);
                printf("MOV BX,[%s]\n",$5);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$1);
        }


        | ID '=' NUM '/' ID {
                printf("MOV AX,#%lf\n",$3);
                printf("MOV DX,0\n");
                printf("MOV BX,[%s]\n",$5);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",$1);
        }


	| ID '=' ID '+' NUM {
                printf("MOV AX,[%s]\n",$3);
                printf("ADD AX,#%lf\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

        | ID '=' ID '-' NUM {
                printf("MOV AX,[%s]\n",$3);
                printf("SUB AX,#%lf\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

        | ID '=' ID '*' NUM {
                printf("MOV AX,[%s]\n",$3);
                printf("MOV BX,#%lf\n",$5);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$1);
        }


        | ID '=' ID '/' NUM {
                printf("MOV AX,[%s]\n",$3);
                printf("MOV DX,0\n");
                printf("MOV BX,#%lf\n",$5);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",$1);
        }
        | ID '=' NUM'+' NUM {
                printf("MOV AX,#%lf\n",$3);
                printf("ADD AX,#%lf\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

        | ID '=' NUM '-' NUM {
                printf("MOV AX,#%lf\n",$3);
                printf("SUB AX,#%lf\n",$5);
                printf("MOV [%s],AX\n",$1);
        }

        | ID '=' NUM '*' NUM {
                printf("MOV AX,#%lf\n",$3);
                printf("MOV BX,#%lf\n",$5);
                printf("MUL BX\n");
                printf("MOV [%s],AX\n",$1);
        }


        | ID '=' NUM '/' NUM {
                printf("MOV AX,#%lf\n",$3);
                printf("MOV DX,0\n");
                printf("MOV BX,#%lf\n",$5);
                printf("DIV BX\n");
                printf("MOV [%s],AX\n",$1);
        }


	| ID '=' ID {
                printf("MOV [%s],[%s]\n",$1,$3);
        }

	| ID '=' NUM{
                printf("MOV [%s],#%lf\n",$1,$3);
        };
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

