#include<stdio.h>
void swap(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
int js(int d[],int j[],int n)
{
    int i,r,k,q;
d[0]=j[0]=0;
j[1]=1;
k=1;
printf("hjdg\n");
for(i=2;i<n;i++)
{
r=k;
printf("for loop\n");
while((d[j[r]]>d[i])&&(d[j[r]]!=r)){
r=r-1;
printf("while loop\n");
}
if((d[j[r]]<=d[i])&&d[i]>r)
{
printf("if condition\n");
for(q=k;q>r+1;q--){
printf("nested for  loop\n");
r--;
}
j[q+1]=j[q];
j[r+1]=i;
k=k+1;
}
}
return k;
}
int main()
{
int i,p[100],d[100],n,j,f,temp,profit=0,job[100];
printf("enter n value");
scanf("%d",&n);
//j=(int*) calloc(n + 1, sizeof(int));
for(i=0;i<n;i++)
job[i]=0;
printf("enter profits");
for(i=0;i<n;i++)
scanf("%d",&p[i]);
printf("enter deadlines");
for(j=0;j<n;j++)
scanf("%d",&d[j]);
//	for(j=0;j<n;j++)
//	printf("%d  ",d[j]);
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++){
    if(p[i]<p[j]){
    temp=p[i];
    p[i]=p[j];
    p[j]=temp;
    temp=d[i];
    d[i]=d[j];
    d[j]=temp;
    }
    }
    }
    for(i=0;i<n;i++)
    printf("%d ",p[i]);
    printf("\n");
    for(j=0;j<n;j++)
    printf("%d ",d[j]);
f=js(d,job,n);
printf("\n");
     printf("%d\n",f);
     for(i=0;i<f;i++)
     profit+=p[job[i]];
     printf("profit=%d",profit);
return 0;
}


