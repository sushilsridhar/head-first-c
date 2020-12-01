#include<stdio.h>
void main()
{
	int a=3;
	/* switch(a)
	{
		case 2:printf("case 2");
				goto name;
			   break;  
		default: printf("default");
				break;
		
		case 4: printf("case 4");
				break;
	} */
		for(;;)
		{
			if(a==2)
				goto name;
			else
				printf("gates");
				exit(0);
		}
			
			
		name: printf("\n i'm zach"); 
		
		/*char suite=3;
		//printf("%d",suite);
		int ch = 'a'+'b';
		printf("%d",ch); */
}