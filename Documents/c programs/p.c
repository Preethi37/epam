#include<stdio.h>
void repeat();
int main()
{
	int n;
	printf("enter n value");
	scanf("%d",&n);
	 while(n){
	repeat();
	n--;
	 }
	return 0;
}
	void repeat(){
     int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{ 
		   // if(j==1)
		   // printf("\t");
		    if(i==2 && j==1)
			printf("   *   ");
			else if(j==1)
		    printf("\t");
			else
			printf("*");
		}
		printf("\n");
		printf("\n");
	}
	}
	
