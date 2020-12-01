#include<stdio.h>
int main()
{
	int card=1;
	char card_name[3];
	scanf("%s",card_name);
	if(card >1)
	{
		card= card-1;
		if(card<7)
			puts("small card");
		else
		puts("Ace");
	}
	return 0;
}