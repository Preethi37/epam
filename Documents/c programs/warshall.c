#include<stdio.h>
int a[100][100];
int min(int a,int b){
	if(a>b)
	return b;
	return a;
}
void warshall(int a[][100],int n)
{
	int i,j,k;
    for(k=1;k<=n;k++){
	for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
	}
	}
    }
    printf("shortest paths are \n");
    for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n,i,j;
	printf("enter no of vertices");
	scanf("%d",&n);
//	*a=(int*)malloc((n+1)*sizeof(int));
     printf("enter array elements");
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	 
	warshall(a,n);
	
/*	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}*/
	return 0;
}
