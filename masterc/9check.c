#include<stdio.h>
void display(int *);
void show(int **);
void main()
{
	int a=3,*n;
	display(&a);
}

void display(int *n)
{
	show(&n);
}

void show(int **m)
{
	printf("the value contained in double pointer is: %d",**m);
}

