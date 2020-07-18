#include<stdio.h>
#include<string.h>
int main()
{
	char a[]="rama";
	char b[]="krishna";
    int i;
	puts(strcat(a,b));
	puts(a);
	puts(b);
	i=strcmp(a,b);
	printf("%d\n",i);
	if(strcmp(a,b)==0)
	printf("strings are equal");
	else
	printf("strings are not equal");
	printf("-------------\n");
puts(strncpy(a,b,7));
//	printf("\n");
//strcpy(a,b);
//	puts(a);
	puts(b);
	return 0;
}
