
/* sum of digits */
#include<stdio.h>
void main()
{
	int a,r,sum=0;
	printf("enter the number");
	scanf("%d",&a);
	for(;a!=0;a=a/10)
	{
		r=a%10;
		sum=sum+r;
	}
	printf("sum is %d",sum);
}	