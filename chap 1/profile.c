#include<stdio.h>
int main()
{
	
	int age;
	char name[20];
	char qual[20];
	scanf("%s,%i,%s",name,&age,qual);
	printf("Name : '%s'",name);
	printf("\nAge : '%i'",age);
	printf("\nQualification : '%s'",qual);
	return 0;
}