//to print something differently
#include<stdio.h>
int main()
{
	int c,d;
	char string[]="cprogramming";
	printf("\n\n------------------------\n");
	for(c=0;c<=11;c++)
	{
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	for(c=12;c>=0;c--)
	{
		d=c+1;
		printf("|%-12.*s|\n",d,string);
	}
	printf("-------------------\n");
	return 0;
}
