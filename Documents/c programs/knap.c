#include<stdio.h>
float x[10];
void swap(float *a,float *b)
{
	float t;
	t=*a;
	*a=*b;
	*b=t;
}
void swap1(int *a,int *b)
{
    int t;
	t=*a;
	*a=*b;
	*b=t;
}
void knapsack(int n,int p[],int w[],int m)
{
	int i,j=0,k,p1;
	float pr=0;
	for(i=0;i<n;i++)
	{
		if(w[i]<=m){
			x[j]=1;
			m=m-w[i];
			j++;
			printf("%f\n",x[i]);
		}
		
		else
		break;
	}
	if(i<=n)
	x[j]=(float)(m)/w[i];
	printf("%f\n",x[i]);
	for(p1=k;p1<n;p1++){
		x[p1]=0;
	}
	for(i=0;i<=j;i++){
		printf("%d\n",x[i]);
		pr+=x[i]*p[i];
	}
	k=i+1;
}
int main()
{
	int n,i,j,p[100],w[100],m;
	float profit=0;
	float pw[100];
	printf("enter n value");
	scanf("%d",&n);
	printf("enter maximum weight of the bag");
	scanf("%d",&m);
	printf("enter profits");
	for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	printf("enter weights");
	for(i=0;i<n;i++)
	scanf("%d",&w[i]);
	for(i=0;i<n;i++)
	pw[i]=(float)(p[i])/w[i];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			if(pw[i]<pw[j]){
			swap(&pw[i],&pw[j]);
			swap1(&p[i],&p[j]);
			swap1(&w[i],&w[j]);
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%f  ",pw[i]);
    printf("\n");
//	for(i=0;i<n;i++)
//	printf("%d  ",w[i]);
    printf("\n");
	knapsack(n,p,w,m);
//	for(i=0;i<n;i++)
//	printf("%f ",x[i]);

	printf("\n");
	for(i=0;i<n;i++)
	profit+=x[i]*p[i];

	printf("total profit is %f",profit);
	return 0;
}
