#include <stdio.h>
#include <ctype.h>
int main(){
	char str[100];
	int i=0;
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	while(str[i]){
		str[i]=toupper(str[i]);
		i++;
	}
	printf("Uppercase string: %s\n",str);
	return 0;
}


