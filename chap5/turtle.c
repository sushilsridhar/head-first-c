#include<stdio.h>

typedef struct 
{
	const char *name;
	const char *company;
	int age;
}wish;

void birthday(wish *w)
{
	(*w).age=(*w).age+1;
	printf("happy b'day %s !!!! ur age is %i!!!",w->name,w->age);
}


int main()
{
	wish bday={"larry page","google",21};
	birthday(&bday);
	printf("\n your age is %i",bday.age);
	return 0;
}