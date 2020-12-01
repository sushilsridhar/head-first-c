#include<stdio.h>

typedef enum 
{
	xperia, microsoft, apple
}company;

typedef union
{
	float rupees;
	float dollars;
}currency;

typedef struct
{
	const char *user;
	
	currency cur;
	company comp;
}purchase;

void amount( purchase p)
{
	if(p.comp == xperia)
	{
	printf("%s has bought for %f dollars\n",p.user,p.cur.dollars);
	}
	else if(p.comp == apple)
	{
	printf("%s has bought for %f rupeess",p.user,p.cur.rupees);
	}
	
}
  
int main()
{
	purchase one={"bill gates",.cur.dollars=2000,xperia};
	purchase two={"steve jobs",.cur.rupees=1000,apple};
	amount(one);
	amount(two);
	return 0;
}