#include<stdio.h>
int main ()
{
	int a,b,p;
	printf("enter the number1:");
	scanf("%d",&a);
	printf("\nenter the number2:");
	scanf("%d",&b);
	p=a*b;
	if(p%2==0)
	{
	printf("\n even");
	}
	else
	{
	printf("\n odd");
	}
	return 0;
}
