#include<stdio.h>

typedef struct island 
{
	char *name;
	char *opens;
	char *closes;
	struct island *next;
}island;

void display(island *i)
{
	for(;i!=NULL;i=i->next)
	{
		printf(" \t Name: %s \t timings: %s-%s \t \n",i->name,i->opens,i->closes);
		
	}
}




int main()
{
	island shutter={" Shutter island","9","17",NULL};
	island skull={" Skull island","10","1",skull.next=&shutter};
	island amity={" Amity island","9","17",amity.next=&skull};
	
	
	
	
	display(&amity);
	
	return 0;
}
