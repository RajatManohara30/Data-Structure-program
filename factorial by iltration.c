#include<stdio.h>
int main()
{
   int n,i,fact=1;
   printf("ENTER A NUMBER = ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    fact = fact*i;
   }
   printf("FACTORIAL OF %d = %d",n,fact);
}