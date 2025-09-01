#include<stdio.h>
void swap(int ,int);
void main()
{
	int a,b;
	printf("enter a first number = ");
	scanf("%d",&a);
	printf("enter a second number = ");
	scanf("%d",&b);
	swap(a,b);
}
void swap(int c, int d)
{
	int temp;
	temp = c;
	c = d;
	d = temp;
	printf("after swaping a = %d and b = %d",c,d);
}
