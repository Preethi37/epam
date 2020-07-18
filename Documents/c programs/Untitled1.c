#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("enter a string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
	if(s[i]==' ')
	{
	  while(s[i]==' '){
	  i++;
	  }
	  printf("\n");
	  i=i-1;
	}
	else
	  printf("%c",s[i]);
	}
	printf("\n");
	
	return 0;
}

