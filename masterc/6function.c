#include<stdio.h>
//int factorial(int);
void main()
{
	int factorial(int);
	int a,fact;
	printf("enter the number: ");
	scanf("%d",&a);
	fact=factorial(a);
	printf("the factorial is: %d",fact);
}

int factorial(int b)
{
	int f=1,i;
	for(i=1;i<=b;i++)
		f=f*i;
	return(f);
}