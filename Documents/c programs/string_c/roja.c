#include<stdio.h>
int main()
{
     int x,y,z,c=0,i,n;
     printf("enter x,y values");
     scanf("%d",&x);
     scanf("%d",&y);
     if(x!=y)
     c=c+1;
     for(i=0;i<n-2;i++)
     {
     	printf("%d",&z);
     	if(x!=y&&x!=z){
     	c=c+1;
     	if(i==(n-3))
     	c=c+1;
     }
     
	return 0;
}
