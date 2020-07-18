#include<stdio.h>
void minmax(int *a,int l,int h,int max,int min)
{
	int max1,min1,mid;
	if(l==h)
	{
		max=a[l];
		min=a[h];
	}
	else if(l==h-1)
	{
		if(a[l]>a[h])
		{
			max=a[l];
			min=a[h];
		}
		else
		{
			max=a[h];
			min=a[l];
		}
	}
	else
	{
		mid=(l+h)/2;
		minmax(a,l,mid,max,min);
		max1=max;
		min1=min;
		minmax(a,mid+1,h,max1,min1);
		if(max<max1)
		max=max1;
		if(min>min1)
		min=min1;
	}
}
int main()
{
	int n,*a,i,max,min;
	printf("enter n value");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter values\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
    minmax(a,0,n-1,&max,&min);
    printf("max %d\n",max);
    printf("min %d\n",min);
}


