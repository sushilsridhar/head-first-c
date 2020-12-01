#include<stdio.h>
int main()
{
	char a[30];
	scanf("%s",a);
	fprintf(stdout,"%s",a);
	fprintf(stderr,"%s",a);
	return 0;
}
	