#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct island
{
	char *name;
	char *opens;
	char *closes;
	struct island *next;
}island;

island* create(char *name)
{
	island *i= malloc(sizeof(island));
	i->name=strdup(name);
	i->opens="9";
	i->closes="17";
	i->next=NULL;
}


int main()
{
	char name[20],name1[20];
	fgets(name,20,stdin);
	island *a_island=create(name);
	fgets(name,20,stdin);
	island *b_island=create(name);
	printf(" \t Name: %s \t timings: %s-%s \t \n",a_island->name,a_island->opens,a_island->closes);
	printf(" \t Name: %s \t timings: %s-%s \t \n",b_island->name,b_island->opens,b_island->closes);
	
	return 0;
}