#include<stdio.h>
#include"encryption.h"

int main()
{
	char secret[80];
	scanf("enter the message: \t",secret);
	printf("the encoded secret message is: \t ",encrypt(secret));
	return 0;
}