#include <stdio.h> 
#include <string.h>
#include <ctype.h>
struct op 
{
    char l;
    char r[20];
}
op[10], pr[10];

void main() 
{
	int a, i, k, j, n, z = 0, m, q;
	char * p, * l;
	char temp, t;
	char * tem;
	printf("enter no of values:");
	scanf("%d", & n);
	for (i = 0; i < n; i++) 
	{
		printf("\tleft:\t");
		scanf("%c", &op[i].l);
		scanf("%c", &op[i].l);
		printf("\tright:\t");
		scanf("%s", op[i].r);
	}
	printf("intermediate Code\n");
	for (i = 0; i < n; i++) 
	{
		printf("%c=", op[i].l);
		printf("%s\n", op[i].r);
	}
	
	// copy propagation
	for(i=0;i<n;i++){
		if (op[i].r[1]=='\0'&&!isdigit(op[i].r[0])) {
			for(j=i-1;j>=0;j--){
				if (!isdigit(op[j].r[0])&&op[i].r[0]==op[j].l) {
					op[i].r[0]=op[j].r[0];
				}
			}
		}    
	}
	printf("\nAfter Copy propagation\n");
	for (i = 0; i < n - 1; i++) 
	{
		temp = op[i].l;
		for (j = 0; j < n; j++) 
		{
			p = strchr(op[j].r, temp);
			if (p) 
			{
				pr[z].l = op[i].l;
				strcpy(pr[z].r, op[i].r);
				z++;
				break;

			}
		}
	}
	pr[z].l = op[n - 1].l;
	strcpy(pr[z].r, op[n - 1].r);
	z++;

	//sub expression elimination
	for (m = 0; m < z; m++) 
	{
		tem = pr[m].r;
		for (j = m + 1; j < z; j++) 
		{
			p = strstr(tem, pr[j].r);
			if (p)
			{
				t = pr[j].l;
				pr[j].l = pr[m].l;
				for (i = j+1; i < z; i++) 
				{
					l = strchr(pr[i].r, t);
					if (l) {
						a = l - pr[i].r;
						pr[i].r[a] = pr[m].l;
					}
				}
			}
		}
	}
	// duplicate production elimination

	for (i = 0; i < z; i++)
	{
		for (j = i + 1; j < z; j++)
		{
			q = strcmp(pr[i].r, pr[j].r);
			if ((pr[i].l == pr[j].l) && !q)

			{
				pr[i].l = '\0';
			}
		}
	}
	for (i = 0; i < z; i++) 
	{
		if (pr[i].l != '\0') {
			printf("%c=", pr[i].l);
			printf("%s\n", pr[i].r);
		}    
	}
}
