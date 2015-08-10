#include <stdio.h>
int main()
{
	int sum,a,b,c,d,e,i;
	FILE *fout;
	fout=fopen("Acending.txt","w");
	fprintf(fout,"enter five number each are not the same\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	sum=a+b+c+d+e;
	for(i=0;i<=sum;i++)
	{
		if(a==i||b==i||c==i||d==i||e==i)
		fprintf(fout,"Acending five number %d\n",i);
	}
	fclose(fout);
	return 0;
}