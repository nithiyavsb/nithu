#include <stdio.h>
int main() 
{
int a[10];
int i;
int gr;
printf("Enter ten values:");
for (i = 0; i < 10; i++) 
{
scanf("%d", &a[i]);
}
gr= a[0];
for (i = 0; i < 10; i++)
{
if (a[i] > gr) 
{
gr= a[i];
}
}
printf("Greatest of ten numbers is %d", gr);
return 0;
	
}
