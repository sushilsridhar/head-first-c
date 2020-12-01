#include<stdio.h>

struct chief
{
	const char *manager;
};
struct company
{
	const char *name;
	const char *ceo;
	int rating;
	struct chief man;
};

int main()
{
	struct company comp={"google","larry",9,{"brin"}};
	
	printf("%s", comp.man.manager);
	return 0;
	
}