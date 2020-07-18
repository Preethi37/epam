#include<stdio.h>
#include<string.h>
int main()
{
	int a[10],i,l,k,h,j,x2[100],x1[100];
	char s[10];
	scanf("%s",s);
	printf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	a[i]=s[i];
	for(i=0;i<l;i++)
	printf("%d  ",a[i]);
	    for(i=0,h=0;i<l;i++)
    {
      for(k=7;k>=0;k--)
	  {
	  x2[k]=s[i]%2;
	  s[i]=s[i]/2;
	  printf("%d\n",x2[k]);
	  printf("tanu\n");
	  printf("%c\n",s[i]);
      }
      for(j=0;j<=7;j++)
      {
	   x1[h++]=x2[j];
	   printf("%d\n",x1[h]);
	   printf("preethi\n");
      }
    }
	return 0;
}

