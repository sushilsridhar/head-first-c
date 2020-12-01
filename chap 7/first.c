#include<stdio.h>
#include<string.h>
void main()
{
	char match[30];
	FILE *input=fopen("input.txt","r");
	FILE *output=fopen("output.txt","w");
	
	while(fscanf(input,"%s",match)==1)
	{
	
	if(strstr(match,"sports") && ! strstr(match,"beiber"))
	{
	fprintf(output,"%s",match);
	}
	}
	close(input);
	close(output);
	return 0;
}