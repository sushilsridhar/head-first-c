#include<stdio.h>
void main()
{
	int x=4,y=0,z;
	while(x>=0)
	{
		if(x==y)
			break;
		else
			printf("%d %d\n",x,y);
		x--;
		y++;
	}
}