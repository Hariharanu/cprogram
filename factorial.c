#include<stdio.h>
void main()
{
int n,fact=1,i;
printf("enter the integer");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial of given number is %d",fact);
return 0;
}
