#include <stdio.h>
#include <stdbool.h>

char *keyword[] = {
    "auto", 
    "break", 
    "case", 
    "char", 
    "continue", 
    "do", 
    "default", 
    "const", 
    "double", 
    "else", 
    "enum", 
    "extern", 
    "for", 
    "if", 
    "goto", 
    "float", 
    "int", 
    "long", 
    "register", 
    "return", 
    "signed", 
    "static", 
    "sizeof", 
    "short", 
    "struct", 
    "switch", 
    "typedef", 
    "union", 
    "void", 
    "while", 
    "volatile", 
    "unsigned"
};
char operator[] = {'+','-','*','/','=','&','|','!','?'};
char spsy[] = {'{','}','(',')','[',']',';',','};
bool isOperator(char c){
    int n = sizeof(operator);
    for(int i=0;i<n;i++){
       if(c==operator[i])
	return true;
    }
    return false;
}
bool isSpsy(char c){
    int n = sizeof(spsy);
    for(int i=0;i<n;i++){
       if(c==spsy[i])
        return true;
    }
    return false;
}
bool isKeyword(char *s){
    
    int n = sizeof(keyword)/sizeof(char *);
    char id[100];
    while(!isOperator(s[i])&&!isSpsy(s[i])){
	id[i]=s[i];
	i++;
    }
    str[i]='\0';
    for(int i=0;i<n;i++){
       if(strcmp(keyword[i],id)==0)
        return true;
    }
    return false;
}

void printtoken(int id,int op,int c,int d){
    if(id)
        printf(" : Identifer\n");
    if(op)
        printf(" : Operator\n");
    if(c)
        printf(" : Constant\n");
    if(d)
        printf(" : Delimiter\n");
}
int main()
{
    // char s[1000];
    // // printf("Enter ther expression: \n");
    // scanf("%[^\n]s",s);
    // int i=0,id=0,op=0,c=0,d=0;
    // while(s[i]){
    //     if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
    //         printtoken(0,op,c,d);id=1;op=0;c=0,d=0;
    //     }
    //     else if((s[i]>='0'&&s[i]<='9')){
    //         printtoken(id,op,0,d);id=0;op=0;c=1;d=0;
    //     }
    //     else if{
    //         printtoken(id,0,c,d);id=0;op=1;c=0;d=0;
    //     }
    //     printf("%c",s[i]);
    //     i++;
    // }
    // printtoken(id,op,c);
    for(int i=0;i<10;i++){
        printf("%s%c%c",keyword[i],operator[i],spsy[i]);
    }
}
