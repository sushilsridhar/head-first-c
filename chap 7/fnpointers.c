#include<stdio.h>
#include<string.h>

int num=3;
char *company[]={
				" bill gates owns microsoft, he likes apple too",
				" steve jobs owns apple, he dont like microsoft",
				"Larry page likes both google and microsoft"
				};


int microsoft(char *s)
{
	return strstr(s,"microsoft") && strstr(s,"apple");
}

int google(char *s)
{
	return strstr(s,"google") && strstr(s,"microsoft");
}

void find( int(*match)(char *))
{
	int i;
	for(i=0;i<num;i++)
	{
		if(match(company[i]))
		{
		printf("%s\n",company[i]);
		}
	}
}

void main()
{
	
	puts("search:\n");
	find(microsoft);
	printf("-------------------\n");
	find(google);
}