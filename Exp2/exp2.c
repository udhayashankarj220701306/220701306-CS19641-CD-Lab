#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char *keyword[] = {"auto","break","case", "char", "continue", "do", "default", "const", "double", "else", "enum", "extern", "for", "if", "goto", "float", "int", "long", "register", "return", "signed", "static", "sizeof", "short", "struct", "switch", "typedef", "union", "void", "while", "volatile", "unsigned"};
char operator[] = {'+','-','*','/','=','&','|','!','?','<','>'};
bool isOperator(char c){
    int n = sizeof(operator);
    for(int i=0;i<n;i++){
      if(c==operator[i]) return true;
    }
    return false;
}
bool isKeyword(char *s,int bp,int fp){
  char id[100];
  int i=bp, n = sizeof(keyword)/sizeof(char *);
  while(i<fp){
  	id[i-bp]=s[i];
    i++;
  }
  id[i-bp]='\0';
  for(int i=0;i<n;i++){
    if(strcmp(keyword[i],id)==0) return true;
  }
  return false;
}
void identify(char* s,int bp,int fp,int id,int op,int c,int d){
  int i=bp;
  while(i<fp&&s[i]!='\n') printf("%c",s[i++]);
  if(op) printf(" : Operator\n");
  if(c) printf(" : Constant\n");
  if(d) printf(" : Special Symbol\n");
  if(id){
    if(isKeyword(s,bp,fp)) printf(" : Keyword\n");
    else printf(" : Identifier\n");
  }
}
void getstr(char* s){
  int n=0,i=0;
  while(1){
    s[i++]=getchar();
    if(s[i-1]=='\n') n+=1;
    else n=0;
    if(n==2) break;
    }
    s[i-2]='\0';
}
int main()
{
  char s[100000];
  printf("Enter the expression: \n");
  getstr(s);
  int fp=0,bp=0, id=0,op=0,c=0,d=0;
  while(s[fp]){
    if(s[fp]==' '||s[fp]=='\n'){
      if(id+op+c+d==1) identify(s,bp,fp,id,op,c,d);
      bp=fp+1;id=0;op=0;c=0,d=0;
    }
    else if((s[fp]>='a'&&s[fp]<='z')||(s[fp]>='A'&&s[fp]<='Z')){
      if(op+c+d==1){
        identify(s,bp,fp,id,op,c,d);bp=fp;
      }
      id=1;op=0;c=0,d=0;
    }
    else if(isOperator(s[fp])){
      if(id+c+d==1){
        identify(s,bp,fp,id,op,c,d);bp=fp;
      }
      id=0;op=1;c=0,d=0;
    }
    else if((s[fp]>='0'&&s[fp]<='9')){
      if(id+op+d==1){
        identify(s,bp,fp,id,op,c,d);bp=fp;
      }
      id=0;op=0;c=1,d=0;
    }
    else{
      identify(s,bp,fp,id,op,c,d);bp=fp;
      id=0;op=0;c=0,d=1;
    }
    fp++;
  }
  identify(s,bp,fp,id,op,c,d);
}
