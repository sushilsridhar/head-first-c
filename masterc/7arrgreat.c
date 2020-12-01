#include<stdio.h>
void main()
{
	int i,n,a[20],big=0;
	printf("enter the no of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);  // 2		3	1 0
		if(a[i]>big)		// 2>0 	3>2  1>3
		{	
			big=a[i];			//big=2		3		
		}
	}
	printf("the greatest number in the array is: %d",big);
}