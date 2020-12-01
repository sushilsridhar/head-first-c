#include<stdio.h>
void main()
{
	int a,i,count,b[20],r;
	printf("enter the number:");
	scanf("%d",&a);
	for(i=0;a!=0;i++,a=a/10)
	{	
		r=a%10;
		b[i]=r;
		count++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("\ndigits are : %d",b[i]);
	}
}