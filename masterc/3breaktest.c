#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(1)
			break;
		else
			printf("inside else");
		printf("inside for loop");
		int a=10;
		printf("%d",a);
	}
}