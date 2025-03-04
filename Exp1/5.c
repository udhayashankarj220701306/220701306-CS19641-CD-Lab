#include <stdio.h>
#include <string.h>
int main(){
        char str[100];
	int freq[256]={0};
        int i;
        printf("Enter a string: ");
        scanf("%[^\n]",str);
        for(i=0;str[i]!='\0';i++){
               freq[(int)str[i]]++;
        }
	printf("Character Frequencies :\n");
	for(i=0;i<256;i++){
		if(freq[i]!=0){
			printf("'%c' occurs %d times\n",(char)i,freq[i]);
		}
	}
        return 0;
}

