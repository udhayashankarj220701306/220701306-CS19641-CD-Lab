#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_op(char c){
        char op[]={'+','-','*','/'};
        for(int j=0;j<4;j++)
                if(c==op[j])
                        return 1;
        return 0;
}
typedef struct quadtriple{
	int label;
	char res[10];
	char arg1[10];
	char op;
	char arg2[10];
} QT;
QT qt[100];
int qti=0;
int t=1,l=1;
void addqt(char *res,char op,char *arg2,char *arg1){
	qt[qti].label=l;
	strcpy(qt[qti].res,res);
	strcpy(qt[qti].arg2,arg2);
	strcpy(qt[qti].arg1,arg1);
	qt[qti].op=op;
	qti++;
	l++;
}
int process_block(char* expr){
	char stk[100][10],opstk[100];
	int stki=-1,opstki=-1,uminus=0;
	char res[10],op,arg[10];
	int p=0,n=strlen(expr),i=0;
	printf("%s\n",expr);
	int res_f=0;
	while(i<n){
		if(!res_f){
			stki=-1;opstki=-1;uminus=0;p=0;
			while(expr[i]!='='&&expr[i]!='(')
				res[p++]=expr[i++];	
			res[p]='\0';
			i++;
			res_f=1;
		}
		p=0;
		if(uminus)
			arg[p++]='-';
		while(!is_op(expr[i])&&expr[i]!=';')
			arg[p++]=expr[i++];
		arg[p]='\0';
		strcpy(stk[++stki],arg);
		if(uminus){
			char temp[10];
			sprintf(temp,"t%d",t);
			t++;
			addqt(temp,'=',"",stk[stki--]);
			strcpy(stk[++stki],temp);
			uminus=0;
		}
		if(opstki!=-1&&(opstk[opstki]=='*'||opstk[opstki]=='/')){
			char temp[10];
			sprintf(temp,"t%d",t);
			t++;
			addqt(temp,opstk[opstki--],stk[stki--],stk[stki--]);
			strcpy(stk[++stki],temp);	
		}
		if(expr[i]!=';')
			opstk[++opstki]=expr[i++];
		else{
			for(int j=0;j<stki;j++){
				char temp[10];
				sprintf(temp,"t%d",t);
				t++;
				addqt(temp,opstk[j],stk[j+1],stk[j]);
				strcpy(stk[j+1],temp);
			}
			addqt(res,'=',"",stk[stki]);	
			res_f=0;
			i++;
		}
		if(expr[i]=='-'){
			uminus=1;
			i++;
		}
	}	
}

int main(){
	FILE * fptr; 
	fptr = fopen("input.txt", "r");
	char expr[50];
	while(fscanf(fptr,"%[^\n]%*c",expr)==1)
		process_block(expr);
	for(int j=0;j<qti;j++)
		printf("%d %s %c %s %s\n",qt[j].label,qt[j].res,qt[j].op,qt[j].arg1,qt[j].arg2);
	fclose(fptr);
}
