#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i,j;
	FILE *fp;
	char s[100],a[100];
	fp=fopen("f3.txt","w");
	if (fp==NULL)
	{
		printf("File not open");
		exit(1);
	}
	printf("Enter Your name:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	printf("Enter your Father name:");
	gets(a);
	printf("\n");
	for(j=0;j<strlen(a);j++)
	fputc(a[j],fp);
	fclose(fp);


}
