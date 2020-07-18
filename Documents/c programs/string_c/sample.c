#include<stdio.h>
int main()
{
    int s,r,i,j,a[100],min,max,c[10]={0};
    printf("enter s and r values");
    scanf("%d %d",&s,&r);
     printf("enter sample values");
     for(i=0;i<s;i++)
     scanf("%d",&a[i]);
     for(j=0;j<r;j++){
     	scanf("%d %d",&min,&max);
     	c[j]=0;
     for(i=0;i<s;i++){
     	if(a[i]>=min && a[i]<=max)
     	c[j]=c[j]+1;
     }
     }
    for(i=0;i<r;i++)
     printf("%d ",c[i]);
	return 0;
}

