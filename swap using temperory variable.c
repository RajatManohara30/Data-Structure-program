#include<stdio.h>
void main()
{
	int a = 5 ,b = 10,temp;
	printf("before swaping a = %dand b = %d\n",a,b);
	
	temp = a;
	a = b;
	b = temp;
	
	printf("after swaping a = %dand b = %d",a,b);
}
