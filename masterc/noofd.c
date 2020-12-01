#include<stdio.h>
void main()
{
	int a,count=0;
	printf("enter the number:");
	scanf("%d",&a);
	for(;a!=0;)
	{
		a=a/10;
		count++;
	}
	printf("\nthe number of digits is:%d",count);
}