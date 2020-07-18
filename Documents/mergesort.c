#include<stdio.h>
int a[100],k=0;
void mergesort(int a[],int l,int u)
{
    int mid;
	if(l<u){
		mid=(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
		merge(a,l,mid,u);
	}
}
void merge(int a[],int l,int mid,int u)
{
	int i,j,b[100];
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=u){
	if(a[i]<a[j])
	b[k++]=a[i++];
	else
	b[k++]=a[j++];
	}
	while(i<=mid)
	b[k++]=a[i++];
	while(j<=u)
	b[k++]=a[j++];
 for(i=0;i<=u;i++)
 a[i]=b[i];	
	
}
main(){
	int n,i;
	printf("enter no. of elements");
    scanf("%d",&n);
    printf("enter elemnts");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]); 
    }
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
	printf("%d\t",a[i]);
    
}
	
	
