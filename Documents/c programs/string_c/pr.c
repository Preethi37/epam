#include<stdio.h>
int add(int b)
{
	int j,cnt;
	cnt=1;
	for(j=2;j<=b/2;j++)
	{
		if(b%j==0)
		cnt=0;
	}
	if(cnt==0)
	return 1;
	else
	return 0;
}
void prime(int n){
	int i,j,f,a[25],k=0,count=0,sum=0,c;
	for(i=2;i<=n;i++){
		f=0;
		for(j=2;j<i;j++){
		if(i%j==0){
			f=1;
			//printf("not prime");
		break;
		}
		}
		if(f==0){
	//printf("%d",i);
	a[k]=i;
	k++;
	}}
	for(i=0;i<k;i++)
	printf("%d..",a[i]);
	for(i=0;i<k;i++)
	{
		sum=sum+a[i];
		c=add(sum);
		if(c==1)
		count++;
	}
	printf("\n%d",count);
}
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	prime(n);
	
}

