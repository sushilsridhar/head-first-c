#include<stdio.h>
#include"encryption.h"

int main()
{
	char message[20];
	printf("enter the message: \t");
	scanf("%s",message);
	encrypt(message);
	printf("the encoded secret message is: %s \t ",message);
	return 0;
}