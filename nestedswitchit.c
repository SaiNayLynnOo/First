#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num,i;
	printf("Enter real number\n");
	scanf("%d",&num);
	if(num%2==0)
		i=1;
	else 
		i=0;
	switch(i)
	{
		case 1: printf("the number is even\n");break;
		default:
		switch(i)
		{
			case 0:printf("the numver is odd\n"); break;
			default: printf("Try again plz\n");
		}
	}
	return 0;
}