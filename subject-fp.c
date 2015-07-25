#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int myan,eng,math;
	int pass=0;
	int fail=0;
	int dinct=0;
	printf("enter myan mark\n");
	scanf("%d",&myan);
	printf("enter eng mark\n");
	scanf("%d",&eng);
	printf("enter math mark\n");
	scanf("%d",&math);
	if(myan>=80&myan<=100)
	{
		printf("dinct\n");
		dinct++;
	}
	else if(myan>=40&myan<80)
	{
		printf("pass\n");
		pass++;
	}
	else if (myan<40)
	{
		printf("fail\n");
		fail++;
	}
	else
		printf("error\n");

	if(eng>=80&myan<=100)
	{
		printf("dinct\n");
		dinct++;
	}
	else if(eng>=40&myan<80)
	{
		printf("pass\n");
		pass++;
	}
	else if (eng<40)
	{
		printf("fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(math>=80&myan<=100)
	{
		printf("dinct\n");
		dinct++;
	}
	else if(math>=40&myan<80)
	{
		printf("pass\n");
		pass++;
	}
	else if (math<40)
	{
		printf("fail\n");
		fail++;
	}
	else
		printf("error\n");
	printf("total dinct is %d\n",dinct );
	printf("total pass is %d\n",pass );
	printf("total fail is %d\n",fail );


}