// 5674 adds 1 to it.. 6785//
#include<stdio.h>
void main()
{
	int a,ans=0,i,r;
	printf("enter the number:");  
	scanf("%d",&a);
	for(i=1;a!=0;i=i*10)         // 567
	{
		r=a%10+1;          // 5  8  7
		ans=ans+r*i;    //5    85
		a=a/10;
	}
	printf("the number is: %d",ans);
}
		
		