#include<stdio.h>
int main()
{
	char name[10];
	int age;
	char qual[10];
		
	scanf("%s %i %s",name,&age,qual);
	
	printf("name= %s \t age= %i \t qual= %s",name,age,qual);
	return 0;
}