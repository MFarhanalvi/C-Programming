#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
void  main()
{
    system("color 0b");
	int i;
	FILE *fp;
	char s[100];
	fp=fopen("f5.txt","w");
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
}

