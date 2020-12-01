#include<stdio.h>

int main()
{
	float latitude;
	float longitude;
	char info[80];
	int started=0;
	
	
	
	while(scanf("%7f %7f %7s",&latitude,&longitude,&info)== 3)	
	{
		if(started)
		printf(",\n");
		else
		started= 1;
		puts("data=[");
	
		printf(" latitude: %f , longitude: %f , info: %s",latitude,longitude,info);
			puts("\n]");
	}
		

	return 0;
	
}