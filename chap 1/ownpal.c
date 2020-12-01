#include<stdio.h>

void palin(char paal[])
{
	printf("%s %s %s %s %s",paal+6,paal+5,paal+4,paal+3,paal+2);
	printf("%s %s ",paal+1,paal+0);
}


int main()
{
	char pal[10];
	scanf("%s",pal);
	
	palin(pal);
	return 0;
}