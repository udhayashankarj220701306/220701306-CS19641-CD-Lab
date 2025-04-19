#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_op(char c){
        char op[]={'+','-','*','/'};
        for(int j=0;j<4;j++)
                if(c[i]==op[j])
                        return 1;
        return 0;
}


int main(){
	FILE * fptr; 
	fptr = fopen("input.txt", "r");
	char expr[50];
	while(fscanf(fptr,"%[^\n]%*c",expr)==1){
		printf("%s",expr);
		int p=0,n=strlen(expr),i=0;
		while(expr[i]!='='){
			res[p++]=expr[i++];	
		}
		res[p]='\n';
		
	}

	fclose(fptr);
}
