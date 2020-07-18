#include<stdio.h>
main()
{
	int a[4]={0},i=0,n,x,b[4];
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0){
		a[i++]=((n%10)+3)%10;
		n/=10;
	}
x=a[1]*1000+a[0]*100+a[3]*10+a[2];
printf("x=%d",x);
for(i=0;i<4;i++)
printf("\n%d ",a[i]);
for(i=0;i<4;i++)
{
	a[i]=(a[i]+7)%10;
}
for(i=0;i<4;i++)
printf("%d",a[i]);
}
