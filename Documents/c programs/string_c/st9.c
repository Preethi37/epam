//to check strings are equal or not
#include<stdio.h>
int main()
{
	char a[]="rama";
	char b[]="rami";
	int i=0;
	while(a[i]==b[i] &&a[i]!='\0' && b[i]!='\0')
	i=i+1;
	if(a[i]=='\0' && b[i]=='\0')
	printf("strings are equal");
	else
	printf("not equal strings");
		return 0;
}
