#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int  main()
{
	int i;
	FILE *fp;
	char s[100];
	fp=fopen("f4.txt","a");
	if (fp==NULL)
	{
		printf("File not open");
		exit(1);
	}
	printf("Enter Your name:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	fclose(fp);
	getch();

}
