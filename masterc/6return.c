#include<stdio.h>
float area(int);
void main()
{
	int r=1;
	float a;
	a=area(r);
	printf("%f",a);
}

float area(int ar)
{
	float av;
	av=3.14*ar*ar;
	return(av);
}