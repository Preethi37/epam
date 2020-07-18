//to read a string using getchar()
#include<stdio.h>
int main()
{
	char line[15],c;
	int ch=0;
	printf("enter a string");
	do{
		c=getchar();
		line[ch]=c;
		ch++;
	}while(c!='\n');
	ch=ch-1;
	line[ch]='\0';
	printf("\n%s\n",line);
	
	return 0;
}
