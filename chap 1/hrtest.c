#include<stdio.h>
int main()
{
	char name[10];
	int num;
	FILE *in=fopen("harishtest.txt","r");
	FILE *out=fopen("harishout.txt","a");
	
	
	fscanf(in,"%s",name);
	fprintf(out,"%s",name);
	
	fscanf(in,"%i",&num);
	
	if( num > 10)
	{

	fprintf(out,"%i",num);
	}
	else
	{
	printf("error");
	}
	fclose(in);
	fclose(out);
	return 0;
}
	
	
	

	
	