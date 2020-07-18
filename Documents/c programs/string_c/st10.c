//to reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
	int l,i,j;
	char s[100],a[100];
	puts("enter a string");
	gets(s);
	l=strlen(s);
	printf("%d",l);
	for(i=l-1,j=0;i>=0;i--,j++){
	   a[j]=s[i];
		}
		a[j]='\0';
	
	printf("\nstring is %s\n",a);
    	
		return 0;
}
