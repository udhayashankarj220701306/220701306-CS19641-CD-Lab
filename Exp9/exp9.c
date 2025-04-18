#include <stdio.h>
#include <stdlib.h>

void print_arg(char* c){
	if(48<=c[0]&&c[0]<=57){
		printf("#%s\n",c);
	}
	else{
		printf("[%s]\n",c);
	}
}

int main(){
	char res[10],op1[2],arg1[10],op2[2],arg2[10],c;
	while(1){
		scanf("%s %s %s%c",res,op1,arg1,&c);
		//printf("%s a%ca\n",res,c);
		if(c==' '){
			scanf("%s",op2);
			scanf("%s",arg2);
		}
		printf("MOV AX,");
		print_arg(arg1);
		if(c==' '){
			if(op2[0]=='+'){
				printf("ADD AX,");
			}
			else if(op2[0]=='-'){
				printf("SUB AX,");
			}
			else if(op2[0]=='*'){
				printf("MOV BX,");
			}
			else if(op2[0]=='/'){
				printf("MOV DX,0\n");
			        printf("MOV BX,");
			}
			print_arg(arg2);
			if(op2[0]=='*'){
				printf("MUL BX\n");
			}
			else if(op2[0]=='/'){
				printf("DIV BX\n");
			}
		}
		printf("MOV [%s],AX\n",res);
	}
	
	
}
