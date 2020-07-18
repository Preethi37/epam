#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d=4,e;
    e=(a,b)+(b,c)-(d,b);
    printf("%d",e);
	return 0;
}
