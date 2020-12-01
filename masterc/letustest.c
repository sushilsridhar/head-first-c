#include<stdio.h>
void main()
{
	int a,i,f=0;
	printf("\n enter the value:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
		printf("\nfactor:%d",i);
			if(i%2!=0)
			{
				f=f+i;
			}
		}
		else
		{
		printf("\n not a factor:%d",i);
		
		}
	}
	printf("\nthe sum of factors is:%d",f);
}