#include<stdio.h>
int main()
{
	int n1,n2,x,i,c;
	printf("enter range:");
	scanf("%d %d",&n1,&n2);
	while(n1<=n2)
	{
		c=0;
		//x=n1/2;
		for(i=1;i<=n1;i++)
		if(n1%i==0)
		c=c+1;
		if(c==2)
		printf("%d ",n1);
		n1++;
	}
	return 0;
}
