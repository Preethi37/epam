#include<stdio.h>
void bellman_ford(int v,int cost[][100],int dist[],int n)
{
	int i,u,k;
	for(i=1;i<=n;i++)
	dist[i]=cost[v][i];
//	printf("dist values are\n");
	//printf("---------------------");
	//for(i=1;i<=n;i++)
	//printf("%d  ",dist[i]);
     for(k=2;k<=n-1;k++)
	 {
	 for(u=1;u<=n;u++)
	 {
	 if(u!=v)	
	{
		for(i=1;i<=n;i++)
			{
				if(dist[u]>(dist[i]+cost[i][u]))
				dist[u]=dist[i]+cost[i][u];
			}
		
	}
	 }
	 }
//	 printf("eeeeeeeeeeeeeeeeeeeeeeeeeeeeeee");
printf("shoretst paths are:\n");
for(i=1;i<=n;i++)
printf("%d   ",dist[i]);	
	
}
int main()
{
	int n,cost[100][100],dist[100],i,j;
	printf("enter no of vertices");
	scanf("%d",&n);
    printf("enter array elements");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&cost[i][j]);
//	printf("the given matrix is\n");
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d ",cost[i][j]);
		}
		printf("\n");
	}*/
/*	for(i=1;i<=n;i++)
	dist[i]=cost[1][i];*/
    bellman_ford(1,cost,dist,n);
     return 0;
}
