/* sub without - */
#include<stdio.h>
void main()
{
	int a,b,sub=0;
	printf("enter the numbers");
	scanf("%d %d",&a,&b);
	sub=a + ~b +1;              // ~b=-b-1
	printf("sub is: %d",sub);
}