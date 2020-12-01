#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
{
	char line[80];
	FILE *in=fopen("input3.txt","r");
	FILE *out_ufo=fopen(argv[2],"w");
	FILE *out_dis=fopen(argv[4],"w");
	FILE *out_spoof=fopen(argv[5],"w");
	
	while( fscanf(in,"%s",line) == 1)
	{
		if(strstr(line,argv[1]))
		fprintf(out_ufo,"%s",line);
		else if(strstr(line,argv[3]))
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
	