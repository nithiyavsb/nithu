#include<stdio.h>
int main()
{
int m,n,o,p,q;
scanf("%d",&m);
n=m%10;
o=m/10;
p=o%10;
q=o/10;
printf("%d\t%d\t%d\t",q,p,n);
return 0;
}
