#include<stdio.h>

struct company
{
	const char *name;
	const char *ceo;
	int rating;
};


void status(struct company p)
{
	printf("the status of company is \n");
	printf("\n name : %s \n ceo :  %s \n rating : %i",p.name, p.ceo, p.rating);
}



int main()
{

 struct company comp ={"google","larry",9};
 status(comp);
 return 0;
}

