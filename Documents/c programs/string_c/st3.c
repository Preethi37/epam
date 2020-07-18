//copy a string from one to other string
int main()
{
	char s1[100],s2[100];
	int i;
	printf("enter a string: ");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	s2[i]=s1[i];
	s2[i]='\0';
	printf("\n%s\n",s2);
	printf("no of characters=%d\n",i);
	return 0;
}

