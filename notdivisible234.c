#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,rem;
	FILE *fout;
	fout=fopen("notdivisible235.txt","w");
	for(i=1;i<=1000;i++)
	{
		i=i;
		if((i%2!=0)&&(i%3!=0)&&(i%5!=0))
		fprintf(fout,"the number is not divisible by 2,3,5 is %d\n",i);

	}
	fclose(fout);
	return 0;
}