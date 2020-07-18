#include<stdio.h>
#include<math.h>
int main()
{
	double p,s,mi,sum,emi,bank[5],sq;
	int y,n,k,i,yrs,l=0;
	printf("enter loan amount");
	scanf("%lf",&p);
	printf("enter total tenure in years");
	scanf("%lf",y);
	for(k=0;k<2;k++){
		printf("enter n value");
		scanf("%d",&n);
		sum=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&yrs);
			scanf("%lf",&s);
			mi=0;
			sq=pow((1+s),yrs*12);
			sum=sum+emi;
		}
		bank[l++]=sum;
	}
	if(bank[0]<bank[1])
	printf("bank a");
	else
	printf("bank b");	
	return 0;
}

