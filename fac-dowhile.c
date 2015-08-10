#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,fac=1,i=1;	
	printf("enter the number\n");
	scanf("%d",&num);
	do
	{
		fac*=i;
		++i;
	}while(i<=num);
	printf("factorial of %d is %d\n",num,fac);
	return 0;
}