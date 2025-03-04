#include <stdio.h>
#include <string.h>
int main(){
        char str[100],sub[100];
        int i,j,found;
        printf("Enter the main string: ");
        scanf("%[^\n]",str);
//	scanf("%c");
	printf("Enter the substring: ");
        scanf("%s",sub);
        for(i=0;str[i]!='\0';i++){
                found=1;
		for(j=0;sub[j]!='\0';j++){
//			printf("%c %c",str[i+j],sub[j]);
			if(str[i+j]!=sub[j]){
				found=0;
				break;
			}
		}
		if(found){
			printf("Substring found at index : %d\n",i);
			return 0;
		}
        }
        printf("Substring not found\n");
        return 0;
}

