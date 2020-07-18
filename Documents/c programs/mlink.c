#include<stdio.h>
#include<stdlib.h>
int link_index(int *a,int q,int r,int *link)
{
	int i,j,k;
	i=q;
	j=r;
	k=0;
	while(i!=0 && j!=0){
		if(a[i]<=a[j]){
			link[k]=i;
			k=i;
			i=link[i];
		}
		else{
			link[k]=j;
			k=j;
			j=link[j];
		}
		if(i==0)
		link[k]=j;
		else
		link[k]=i;
	}
	return link[0];
}
int merge_sort(int *a,int l,int h,int *link){
	int m,q,r;
	if(l==h)
	return l;
	if(l<h)
	 {
	 	m=(l+h)/2;
	 	q=merge_sort(a,l,m,link);
	 	r=merge_sort(a,m+1,h,link);
	 	return link_index(a,q,r,link);
	 }
}
int main()
{
	int *a,n,i,*link;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter %d elements :",n);
	a=calloc(n+1,sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i+1]);
	link=calloc(n+1,sizeof(int));
	merge_sort(a,1,n,link);
	printf("after sorting\n");
	for(i=link[0];i!=0;i=link[i])
     	printf("%d ",a[i]);
	printf("\n");
	return 0;
}

