#include<stdio.h>
#include<string.h>
int main()
{
	char line[80];
	FILE *in=fopen("input1.txt","r");
	FILE *out_ufo=fopen("ufo1.txt","a");
	FILE *out_dis=fopen("dis1.txt","a");
	FILE *out_spoof=fopen("spoof1.txt","a");
	
	while( fscanf(in,"%s",line) == 1)
	{
		if(strstr(line,"ufo"))
		fprintf(out_ufo,"%s",line);
		else if(strstr(line,"disappearance"))
		fprintf(out_dis,"%s",line);
		else
		fprintf(out_spoof,"%s",line);
		
	}
	
	fclose(in);
	fclose(out_ufo);
	fclose(out_dis);
	fclose(out_spoof);
	
	return 0;
}
	