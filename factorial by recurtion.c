#include<stdio.h>
int fact(int n);
int main()
{
 int n,fac;
 printf("enter a number = " );
 scanf("%d",&n);
 fac = fact(n);
 printf("factorial of %d = %d ",n,fac);
}
int fact(int n)
{
 int fac = 1;
 if(n==1)
 {
  return 1;
 }
 else
 {
  fac = n*fact(n-1);
  
 }
 return fac;
}
