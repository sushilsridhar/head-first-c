#include<stdio.h>
void main()
{
	int a=4,b=3,c,d=5;
	c=a-- + d - b--;                        //c=a-- -b;
	printf("%d %d %d",a,b,c);         //--a -b;
}