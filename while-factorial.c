#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num,fac=1,i=1;
	printf("enter the number\n");
	scanf("%d",&num);
	while(i<=num)
	{
		
	fac*=i;
	i++;
	}
	printf("factorial is %d",fac);
	return 0;
}