#include <stdio.h>
#include <stdlib.h>
void call1();
void call2();
void call3();
int main()
{
	int num;
	do{
	printf("slect 0 to exit\n");
	printf("slect 1 to display Hello\n");
	printf("slect 2 to calculate area\n ");
	printf("slect 3 to six-subject\n ");
	scanf("%d",&num);
	switch(num)
	{
		case 0:exit(0);
		case 1:call1(); break;
		case 2:call2(); break;
		case 3:call3(); break;
		default: printf("error\n");break;
	}
	}while(num!=0);
	return 0;

}
void call1()
{
	printf("Hello Everybody\n");
}
void call2()
{
	float a,r;
	printf("enter the radius\n");
	scanf("%f",&r);
	a=3.142*r*r;
	printf("the area is %f\n",a );
} 

void call3()
{
	int myan,eng,math,phy,che,bio;
	int dist,pass,fail,cred;
	
	do{
	printf("enter  mark of six subjict\n");
	scanf(" %d %d %d %d %d %d",&myan,&eng,&math,&phy,&che,&bio);
	dist=0,pass=0,fail=0,cred=0;
		if(myan>=80&&myan<100)
	{
		printf(" myan is distinct\n");
		dist++;
	}
	else if(myan>=65&&myan<80)
	{
		printf("myan credit\n");
		cred++;
	}
	else if(myan>=40&&myan<65)
	{
		printf("myan pass\n");
		pass++;
	}
	else if(myan<40)
	{
		printf("myan fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(eng>=80&&eng<100)
	{
		printf("eng distinct\n");
		dist++;
	}
	else if(eng>=65&&eng<80)
	{
		printf("eng credit\n");
		cred++;
	}
	else if(eng>=40&&eng<65)
	{
		printf("eng pass\n");
		pass++;
	}
	else if(eng<40)
	{
		printf("eng fail\n");
		fail++;
	}
	else
		printf("error\n");
	
	if(math>=80&&math<100)
	{
		printf("math distinct\n");
		dist++;
	}
	else if(math>=65&&math<80)
	{
		printf("math credit\n");
		cred++;
	}
	else if(math>=40&&math<65)
	{
		printf("math pass\n");
		pass++;
	}
	else if(math<40)
	{
		printf("math fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(phy>=80&&phy<100)
	{
		printf("phy distinct\n");
		dist++;
	}
	else if(phy>=65&&phy<80)
	{
		printf("phy credit\n");
		cred++;
	}
	else if(phy>=40&&phy<65)
	{
		printf("phy pass\n");
		pass++;
	}
	else if(phy<40)
	{
		printf("phy fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(che>=80&&che<100)
	{
		printf("che distinct\n");
		dist++;
	}
	else if(che>=65&&che<80)
	{
		printf("che credit\n");
		cred++;
	}
	else if(che>=40&&che<65)
	{
		printf("che pass\n");
		pass++;
	}
	else if(che<40)
	{
		printf(" che fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(bio>=80&&bio<100)
	{
		printf("bio distinct\n");
		dist++;
	}
	else if(bio>=65&&bio<80)
	{
		printf("bio credit\n");
		cred++;
	}
	else if(bio>=40&&bio<65)
	{
		printf("bio pass\n");
		pass++;
	}
	else if(bio<40)
	{
		printf("bio fail\n");
		fail++;
	}
	else
		printf("error\n");
	printf("total fail is %d\n",fail);
	printf("total pass is %d\n",pass);
	printf("total cred is %d\n",cred);
	printf("total dist is %d\n",dist);
	}while(myan<=100);
}