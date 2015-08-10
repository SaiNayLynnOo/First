#include <stdio.h>
#include <stdlib.h>
int main ()
{
	char ch;
	int n1,n2;
	do
	{
		printf("\n********************************************\n");
		printf("Enter number,operator and number\n");
		scanf("%d%c%d",&n1,&ch,&n2);
		switch(ch)
		{
			case '+': printf("Answer is %d\n",n1+n2);break;
			case '-': printf("Answer is %d\n",n1-n2);break;
			case '*': printf("Answer is %d\n",n1*n2);break;
			case '/': printf("Answer is %d\n",n1/n2);break;
			default: printf("Try again\n");
		}
	}while(ch!=27);
	return 0;
}