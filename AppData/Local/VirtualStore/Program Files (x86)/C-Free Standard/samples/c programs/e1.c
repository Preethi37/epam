#include<stdio.h>
main()
{
char c='a';
char *p=&c;
	printf("%d%d",sizeof(p),sizeof(*p));
}
