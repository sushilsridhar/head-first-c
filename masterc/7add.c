#include<stdio.h>
void main()
{
	int i,n,a[15],sum=0;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)	
		sum=sum+a[i];
	printf("the sum is :%d",sum);
}