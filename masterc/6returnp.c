#include<stdio.h>
int function(int *);
void main()
{
	int a=3,z;
	z=function(&a);
	printf("%d",z);
}

int function(int *b)
{
	return(*b+2);
}