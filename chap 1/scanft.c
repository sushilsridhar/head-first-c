#include<Stdio.h>
int main()
{
	char name[20];
	printf("enter");
	fgets(name,20,stdin);
	printf("%s",name);
	return 0;
}