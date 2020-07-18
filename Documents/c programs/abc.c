#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char s1[20],s2[20];
	printf("enter 2 strings\n");
	scanf("%s",s1);
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';i++)
	 {
	 	for(j=0;s2[j]!='\0';j++)
	 	{
	 		if(s2[j]!=s1[i])
	 		printf("%c",s2[j]);
	 	}
	 }
	return 0;
}
