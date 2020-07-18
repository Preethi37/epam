#include<stdio.h>
void sort(int p[],int n){
	int i,j,t;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++){
		if(p[i]<p[j])
		{
			t=p[i];
			p[i]=p[j];
			p[j]=t;
		}
	}
}
int main()
{
	int n,k,i,a[100],p[100];
	printf("enter n,k value");
	scanf("%d%d",&n,&k);
	printf("enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(a[i]>k)
		p[i]=a[i]-k;
		else
		p[i]=0;
	}
	sort(p,n);
	for(i=0;i<n;i++)
	printf("%d ",p[i]);
     printf("\nminimum doses are %d",p[0]);	
	return 0;
}
