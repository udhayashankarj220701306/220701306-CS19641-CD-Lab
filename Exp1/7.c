#include <stdio.h>
#include <string.h>
int main(){
        char str[100],oldChar,newChar;
        int i;
        printf("Enter a string: ");
        scanf("%[^\n]",str);
        printf("Enter character to replace: ");
        scanf("%c",&oldChar);
	scanf("%c",&oldChar);
	printf("Enter new character: ");
        scanf("%c",&newChar);
	 scanf("%c",&newChar);
        for(i=0;str[i]!='\0';i++){
		if(str[i]==oldChar){
			str[i]=newChar;
		}
	}
        printf("Modified string: %s\n",str);
        return 0;
}


