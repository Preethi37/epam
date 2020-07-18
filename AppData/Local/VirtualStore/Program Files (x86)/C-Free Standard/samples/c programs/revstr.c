#include<stdio.h>
void reversestring()
{
	char c;
	scanf("%c",&c);
	while(c!='\n')
	{
		reversestring();
		printf("%c",c);
	}
}
int main()
{
	printf("enter a string:");
	reversestring();
	return 0;
}
