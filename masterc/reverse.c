#include<stdio.h>
int main()
{	
	int a,rev=0,r;
	printf("enter the value:");
	scanf("%d",&a);
	for(;a!=0;a=a/10)
	{
		r=a%10;
		rev=rev*10+r;
	}
	printf("reverse is %d",rev);
	return 0;
}