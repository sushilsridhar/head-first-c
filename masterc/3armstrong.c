#include<stdio.h>
void main()
{
	int a,arm=0,r,armstrong;
	printf("enter the number");
	scanf("%d",&a);
	armstrong=a;
	for(;a!=0;a=a/10)
	{
		r=a%10;
		arm=arm+(r*r*r);
	}
	if(arm==armstrong)
		printf("armstrong number");
	else
		printf("not an armstrong number");
}		
		