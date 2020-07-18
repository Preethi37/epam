//program to concatenate 2 or more strings
#include<stdio.h>
int main()
{
	char n1[100],n2[100],n3[100],ch[100];
	int i,j,k;
	printf("enter 3 strings");
	gets(n1);gets(n2);gets(n3);
//	puts(n1);puts(n2);	puts(n3);
 //    printf("\n");
   // strcat(strcat(n1,n2),n3);  ....to concatenate using string function
    //puts(n1);
     for(i=0;n1[i]!='\0';i++)
     ch[i]=n1[i];
     ch[i]=' ';
     
     for(j=0;n2[j]!='\0';j++)
     ch[i+j+1]=n2[j];
     ch[j]=' ';
     
     for(k=0;n3[k]!='\0';k++)
     ch[i+j+k+1]=n3[k];
     
      ch[i+j+k+2]='\0';
     printf("%s\n",ch);
	return 0;
}
