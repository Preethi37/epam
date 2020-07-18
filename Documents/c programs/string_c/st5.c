#include<stdio.h>
int main()
{
    char name[]="i am preethi";
    printf("%10.4s\n",name);//first 4 characters to be printed in a field width of 10columns(right-justified)
    printf("%-10.4s",name);//left-justified
    printf("rama\n");
    printf("%5s",name);
	return 0;
}
