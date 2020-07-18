#include<stdio.h>
main()
{
	int a[100],n,i,j,t,flag,k,low,mid,up,x;
	printf("enter size");
	scanf("%d",&n);
	printf("enter values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	  for(i=0;i<n;i++){
	   for(j=0;j<n;j++){
	     if(a[i]>a[j]){
	     	t=a[i];
	     	a[i]=a[j];
	     	a[j]=t;
	     }
	   }
	  }
	     printf("enter element for searching");
	     scanf("%d",&x);
	     while(low<=up){
	     	mid=(low+up)/2;
	     	if(x>a[mid])
	     	low=mid+1;
	     	else if(x<a[mid])
	     	up=mid-1;
	     	else
	     	{
	     		flag=1;
	     		k=mid;
	     		break;
	     	}
	     	printf("ascending order list\n");
	     	for(i=0;i<n;i++)
	     	printf("%d\n",a[i]);
	     	if(flag==1)
	     	printf("%d found at location %d\n",x,k+1);
	     	else
	     	printf("%d not found\n",x);
	     }
}
