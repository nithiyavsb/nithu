#include <stdio.h>
int main()
{
	int i,j,a[3],n,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(a[i]>a[j])
		{
		m=a[i];
		a[i]=a[j];
		a[j]=m;
		}
		}
	}
		for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
