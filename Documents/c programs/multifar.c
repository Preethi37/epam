#include<stdio.h>
int c[20][20],cost[20],d[20],p[20];
void fgraph(int n,int k)
{
	int i,j,min,l;
	cost[n]=0;
	for(j=n-1;j>=1;j--)
	{
		min=999;
		for(i=1;i<=n;i++)
		{
			if(c[j][i]<999 && c[j][i]>0)
			{
				if(c[j][i]+cost[i]<min)
				{
					min=c[j][i]+cost[i];
					l=i;
				}
			}
		}
		cost[j]=min;
		d[j]=l;
	}
	p[l]=1;
	p[k]=n;
	for(i=2;i<=k-1;i++)
	p[i]=d[p[i-1]];
}
int main()
{
	int i,j,k,n;
	printf("enter no of vertices ");
	scanf("%d",&n);
	printf("enter no of stages");
	scanf("%d",&k);
	printf("enter multi stage graph\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&c[i][j]);
	fgraph(n,k);
	printf("d values\n");
	for(i=1;i<n;i++)
	printf("%d\n",d[i]);
	printf("the path is\n");
	for(i=1;i<=k;i++)
	printf("%d\t",p[i]);
}
