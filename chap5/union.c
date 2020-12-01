#include<stdio.h>

typedef struct
{
	float version;
	int rating;
}mobile;

typedef struct 
{
	char *name;
	char *creator;
	mobile mob;
	
}telephone;

int main()
{
	telephone phn={"xperia","sony",{4.5,9}};
	
	printf(" %s has %f version nd %i rating :D",phn.name,phn.mob.version,phn.mob.rating);
	return 0;
}