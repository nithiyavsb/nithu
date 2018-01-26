#include<stdio.h>
int main()
{
int num,n,digit,sum;
scanf("%d",&n);
while(num>=1)
{
num=n;
digit=num%10;
sum=digit;
}
printf("%d",sum);
num=num/10;
return 0;
}
