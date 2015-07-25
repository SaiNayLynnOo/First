#include <stdio.h>
#include <stdlib.h>
int main()
{
	char ch;
	do{
	ch= _getch();
	printf("%c=%d\n ",ch,ch);
	}while(ch!=27);
	return 0;
}