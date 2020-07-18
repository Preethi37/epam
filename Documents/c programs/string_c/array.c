#include<stdio.h>
int main()
{
	int i,j,l,min1,min2,min,n,a[100][100];
	printf("enter the size of an array\n");
	scanf("%d",&n);
	l=2*n-1;
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=l;j++)
		{
			min1=i<=l-i?i-1:l-i;
			min2=j<=l-j?j-1:l-j;
			min=min1<=min2?min1:min2;
			printf("%d",n-min);
		}
		printf("\n");
	}
}
			
