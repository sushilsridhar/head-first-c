#include<stdio.h>
void main()
{
	int a,i;
	//printf("enter the number:");
	//scanf("%d",&a);
	for(i=2;i<=50;i++)
	{
		if(i%2==1)
		{
			if(i%3!=0 && i%5!=0|| i==3 || i==5)
			{
				printf("\n %d is a PRIME number",i);
			}
			else 
				printf("\n%d is odd number",i);
		}
		else if(i==2)
			printf("\n %d is neither prime nor even",i);
		else
			printf("\n %d is even number",i);
	}
}