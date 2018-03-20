#include <stdio.h>
int main() 
{
int a[100],n,i,see;
printf("\n enter the number of values");
scanf("%d",&n);
printf("\n see element is");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	see=a[(i+2)/2];
}
printf("\s %d ",see);
return 0;
} 
