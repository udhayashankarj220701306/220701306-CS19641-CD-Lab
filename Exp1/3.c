#include <stdio.h>
#include <string.h>
int main(){
        char str1[100],str2[100];
        int i,j,found;
        printf("Enter the first string: ");
        scanf("%[^\n]",str1);
//      scanf("%c");
        printf("Enter the second string: ");
        scanf("%s",str2);
        if(strcmp(str1,str2)==0)
	printf("String are the same\n");
	else
	printf("String are different\n");
        return 0;
}

