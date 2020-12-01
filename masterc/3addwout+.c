/* addition without + */
#include<stdio.h>
void main()
{
	int a,b,sum=0;
	printf("enter the numbers");
	scanf("%d %d",&a,&b);
	sum= a - ~b -1;               // ~b=(-b-1)
	printf("sum is %d",sum);
}