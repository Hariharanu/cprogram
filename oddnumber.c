#include<stdio.h>
int main()
{
	int a,b,rem,i;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		rem=i%2;
		if(rem!=0)
		{
			printf("%d",i);
		}
	}
}
