#include<stdio.h>
int main()
{
   int n,rev=0,temp,rem;
   printf("ENTER A NUMBER = ");
   scanf("%d",&n);
   temp = n;
   while(n!=0)
   {
       rem = n%10;
       rev = rev*10 + rem; 
       n = n/10;
   }
   printf(" REVERSE OF NUMBER %d = %d ",temp,rev);
}