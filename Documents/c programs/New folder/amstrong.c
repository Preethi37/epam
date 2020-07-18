#include<stdio.h>
#include<math.h>
int power(int a,int b)
{
	int i,e=1;
	for(i=1;i<=b;i++)
	e=e*a;
	return e;
}
void armstrong(int num1,int c1)
{
	int org,x,res=0,d;
	org=num1;
	while(num1!=0)
	{
        x=num1%10;
		d=power(x,c1);
		res=res+d;
		num1=num1/10;
	}
	//printf(" %d  %d",res,org);
	if(org==res)
	printf("%d ",res);
	//else
	//printf("not armstrong");
}
	
int main()
{
	int num,n,c=0,b,num2;
	printf("enter a number:");
	scanf("%d %d",&num,&n);
	num2=num;
	while(num)
	{
		num=num/10;
		c=c+1;
	}
	//printf("%d",c);
//     b=power(5,2);
  //   printf("\n%d",b);
   while(num2<=n)
{	armstrong(num2,c);
  num2++;
}
    return 0;
}
