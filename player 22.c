#include <stdio.h>
int main()
{
	int a,b,c,j;
	scanf("%d%d",&a,&b);
	for(j=2;j<=a;j++)
	{
		if(a%j==0  &&  b%j==0);
		{
			c=j;
		}
	}
	printf("%d",c);
}
