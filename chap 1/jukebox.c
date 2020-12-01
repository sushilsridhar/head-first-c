#include<stdio.h>
#include<string.h>

char tracks[][80]= { 
				"love the way you lie",
				"this is survial",
				"stronger than i was",
				"monster",
				"ass like tat",
				};
	

void find_track(char search[])
{
	int i;
	for(i=0;i<5;i++)
	{
		if(strstr(tracks[i],search))
		{
		printf("Track %i: '%s'\n", i, tracks[i]);
		}
	}
}


int main()
{
	
				
	char search_for[80];
	printf("enter the search list:");
	scanf("%s",search_for);
	find_track(search_for);
	return 0;
}	