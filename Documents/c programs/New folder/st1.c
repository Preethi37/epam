#include<stdio.h>
int main()
{
	char s1[100],c1[10],c2[10];
	int i,j,k;
	//int n;
	//printf("enter no of strings");
	//scanf("%d\n",&n);
	printf("enter a strings");
	scanf("%s",s1);
	//while(n!=0)
	//{
		j=0;k=0;
		for(i=0;s1!='\0';i++)
		{
			if(i%2==0){
			c1[j]=s1[i];
                   j++;
			}
				else{
			c2[k]=s1[i];
			k++;
			}
		}
	printf("%s %s",c1,c2);
	return 0;
}
