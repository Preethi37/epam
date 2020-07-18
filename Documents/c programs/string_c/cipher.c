#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
//97 65
int main()
{
	char s[100],c;
	int i,e,k,z=122,z1=90,a,d;
	printf("enter a string\n");
	scanf("%s",s);
	printf("enter a key value:");
	scanf("%d",&k);
//	c=(char)97;
//	printf("%c",c);
	for(i=0;s[i]!='\0';i++)
	{
		if(isalpha(s[i]))
		{
			if(islower(s[i]))
			{
				a=toascii(s[i]);
				d=z-a;
				if(d<k){
					a=toascii('a')+k-d-1;
					printf("%c",(char)a);
				}
				else{
					a=toascii(s[i])+k;
					printf("%c",(char)a);
				}
			}
			else{
				a=toascii(s[i]);
				d=z1-a;
				if(d<k){
					a=toascii('A')+k-d-1;
					printf("%c",(char)a);
				}
				else{
					a=toascii(s[i])+k;
					printf("%c",(char)a);
				}
			}
		}
		else if(isdigit(s[i]))
		{
			e=s[i]-48;
            d=9-e;	
			if(d<k)
			{
			 a=0+k;
			 printf("%d",a);
			}
			else
			{
				a=e+k;
				printf("%d",a);
			}
		}
		else
		printf("%c",s[i]);
	}
	return 0;
}

