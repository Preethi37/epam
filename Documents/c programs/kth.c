#include<stdio.h>
#include<stdlib.h>
//int a[50];
void swap(int *m,int *n)
{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
}
int quicksort(int a[50],int l,int r,int k)
{
	int i,j,p,temp;
	if(l<r)
	{
		i=l;
		j=r;
		p=l;
		while(i<j)
		{
			while((a[i]<=a[p])&&(i<r))
			i++;
			while(a[j]>a[p])
			j=j-1;
			if(i<j)
			{
				swap(&a[i],&a[j]);
			}
		}
		swap(&a[p],&a[j]);
	   if(k<j)
	   return quicksort(a,l,j-1,k);
	   else if(k>j)
	   return quicksort(a,j+1,r,k);
	   else
	   return a[k];
	}
}
int main()
{
	int i,n,k,a[50],p;
	printf("enter no of elements");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter k value");
	scanf("%d",&k);
	p=quicksort(a,0,n-1,k-1);
	printf("kth element is %d\n",p);
	return 0;
}
  	
