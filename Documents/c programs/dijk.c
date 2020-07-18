#include<stdio.h>
void dijk(int a[][],int n,int st);
int main()
{
	int a[20][20],i,j,n,u;
	printf("enter no of vertices");
	scanf("%d",&n);
	printf("enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	printf("enter the starting node");
	scanf("%d",&u);
	dijk(a,n,u);
}
void dijk(int a[20][20],int n,int st)
{
	int cost[20][20],dis[20];
	int vis[20],count,mindis,i,j,next;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	if(a[i][j]==0)
	cost[i][j]=999;
	else
	cost[i][j]=a[i][j];
	for(i=1;i<=n;i++)
	{
		dis[i]=cost[st][i];
		vis[i]=0;
	}
	dis[st]=0;
	vis[st]=1;
	count=1;
	while(count<=n-1)
	{
		mindis=999;
		for(i=1;i<n;i++)
		if(dis[i]<mindis && !vis[i]){
			mindis=dis[i];
			next=i;
		}
		vis[next]=1;
		for(i=1;i<=n;i++)
		if(!vis[i])
		if(mindis+cost[next][i]<dis[i])
		{
			dis[i]=mindis+cost[next][i];
		}
		count++;
	}
		for(i=1;i<=n;i++)
		if(i!=st)
		printf("distance of node %d=%d\n",i,dis[i]);
			}

