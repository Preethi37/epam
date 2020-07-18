//basics...how to read a string in different ways
#include<stdio.h>
int main()
{
	char s[100],line[20];
	 int l;
//	printf("enter a string");
//	scanf("%5s",s);//stores only 5 letters %ws
    printf("enter a line");
	scanf("%[^\n]",line);//to read a line of text with spaces
	printf("the given line is \"%s\"\n",line);
//	printf("the given string is %s \n",s);
	printf("\"well done!\"\n");
	l=strlen(s);
	printf("the length of the string is %d\n",l);
	return 0;
}
