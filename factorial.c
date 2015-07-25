#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,num,fac;
    printf("enter the number ");
    scanf("%d",&num);
    fac=1;
    for(i=1;i<=num;i++)
        fac*=i;
    printf("factorial of %d is %d",num,fac);
    return 0;
}
