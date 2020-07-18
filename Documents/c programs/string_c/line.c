#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("enter a string");
	gets(s);
	printf("string=%s\n",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		s[i]=='\n';
	}
	for(i=0;s[i]!='\0';i++)
	printf("\n%s",s);
	return 0;
}
