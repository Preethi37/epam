#include<stdio.h>
int main()
{
	int low,high,i,flag,temp;
	printf("enter low and high values");
	scanf("%d%d",&low,&high);
	if(low>high){
		temp=low;
		low=high;
		high=temp;
	}
	while(low<=high)
	{
		flag=0;
		for(i=2;i<=low/2;++i)
		{
			if(low%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d",low);
		++low;
	}
	return 0;
}
