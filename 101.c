#include <stdio.h>
int main()
{
	int j,n,k;
	char a[20];
	printf("enter the string");
	scanf("%s",a);
	printf("enter the number");
	scanf("%d",&n);
	k=strlen(a);
	for(j=k-1;j<k;j++)
	{
		printf("%c",a[j]);
	}
}
