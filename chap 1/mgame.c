#include<stdio.h>
int main()
{
	char contestant[]={1,2,3};
	int *choice=contestant;
	contestant[0]=2;
	contestant[1]=contestant[2];
	contestant[2]= *choice;
	
	printf("i hv choosen %i\n",contestant[2]);
}