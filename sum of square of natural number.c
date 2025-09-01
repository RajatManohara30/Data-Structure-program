#include<stdio.h>
void main()
{
	int n,i,sum = 0;
	printf("enter a number = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ 
		sum = sum + i*i;
	}
	printf("sum of square of natural number = %d ",sum);
}

