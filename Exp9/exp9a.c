#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arg(char* c){
        if(48<=c[0]&&c[0]<=57){
                printf("#%s\n",c);
        }
        else{
                printf("[%s]\n",c);
        }
}
int is_op(char* c){
	int len = strlen(c);
	char op[]={'+','-','*','/'};
	for(int i=0;i<len;i++){
		for(int j=0;j<4;j++){
			if(c[i]==op[j])
				return 1;
		}
	}
	return 0;
}

int main(){
        char res[10],op1[2],arg1[10],op2[2],arg2[10],c;
	 char* input[]={
		"t0 = b + c",
		"t1 = t0 * d",
		"a = t1"
	};
	int len = sizeof(input)/4,i=0;
        while(i<len){
		if(is_op(input[i])){
			sscanf(input[i],"%s %s %s %s %s",res,op1,arg1,op2,arg2);
			c=1;
		}
		else{
			sscanf(input[i],"%s %s %s",res,op1,arg1);
			c=0;
		}
		i++;
                printf("MOV AX,");
                print_arg(arg1);
                if(c){
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
                printf("MOV [%s],AX\n\n",res);
        }


}

