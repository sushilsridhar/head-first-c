#include<stdio.h>
#include<string.h>

void rev(char s[])
{
	size_t len=strlen(s);
	char *t=s+len-1;
	while(t>=s)
	{
		printf(" %c", *t);
		t=t -1;
	}
	puts("");
}

int main()
{
	char s[]="ABC";
	
	rev(s);
	return 0;
}