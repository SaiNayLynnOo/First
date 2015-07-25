# include <stdio.h>
#include <stdlib.h>
int main()
{
	int mark;
	do{
	printf("Please enter your mark\n");
	printf("My mark is ");
	scanf("%d",&mark);
	if(mark>=80&&mark<=100)
		printf("distinct\n\n");
	else if(mark>=65&&mark<80)
		printf("credit\n\n");
	else if (mark>=40&&mark<65)
		printf("pass\n\n" );
	else if(mark<40) 
		printf("fail\n\n" );
	else
		printf("error\n\n");
	}while(mark<=100);
	return 0;
} 