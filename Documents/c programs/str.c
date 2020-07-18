#include<stdio.h>
#include<string.h>
int main()
{
	int i,k=0,l;
	char s[100],c[100];
	printf("enter a string");
	scanf("%s",s);
	printf("given=%s\n",s);
	l=strlen(s);
	printf("%d\n",l);
	for(i=0;s[i]!='\0';i++){
		if(i%2==0){
			c[k]=s[i];
			k++;
		}
	}
	c[k+1]=' ';
	printf("%s\n",c);
	k=l/2;
	c[k+1]=' ';
	printf("%d \n",k);
	for(i=0;s[i]!='\0';i++){
		if(i%2!=0){
			c[k+2]=s[i];
			k++;
		}
	}
	//for(k=0;c[k]!='\0';k++)
printf("string=%s\n",c);
	return 0;
}

