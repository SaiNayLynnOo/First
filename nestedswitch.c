#include <stdio.h>
int main()
{
	int i,j,c;
	
	do{
		printf("************\n");
		printf("enter the value of c\n");
		scanf("%d",&c);
		printf("************\n");
		for (j=0;j<13;j++)
			
			{
				i=j+c;
				switch(i)
					{
						case 1: printf("the value of i is %d\n",i); break;
						case 2: printf("the value of i is %d\n",i); break;
						case 3: printf("the value of i is %d\n",i); break;
						case 4: printf("the value of i is %d\n",i); break;
						case 5: printf("the value of i is %d\n",i); break;
						case 6: printf("the value of i is %d\n",i); break;
						case 7: printf("the value of i is %d\n",i); break;
						case 8: printf("the value of i is %d\n",i); break;
						case 9: printf("the value of i is %d\n",i); break;
						case 10: printf("the value of i is %d\n",i); break;
						default: printf("the value of i is exceed 10\n");
					}
			}
		
		}while(i<=30);
			
	return 0;
}