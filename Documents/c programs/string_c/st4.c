//count no of vowels and consonauts in a given string
#include<stdio.h>
int main()
{
    char b[100];
    int v=0,c=0,i=0;
    printf("enter a string");
    gets(b);
    while(b[i]!='\0'){
    	if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' ||
    	b[i]=='A' || b[i]=='E' || b[i]=='U' || b[i]=='O' || b[i]=='I' )
    	 v++;
   	   else
   	    c++;
   i++;
    }
    printf("no of vowels is %d \n",v);
    printf("no of consonauts is %d \n",c);
	return 0;
}
