#include<stdio.h>
int main()
{
	int n,i,k;
	printf("enter n value");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		for(k=0;k<=n;k++){
			if(i>k)
			printf(" ");
			else
			printf("#");
		}
		printf("\n");
	}
	return 0;
}
