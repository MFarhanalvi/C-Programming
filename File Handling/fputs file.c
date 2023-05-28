#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
void main()
{
	system("color 0a");
	char str[20];
	FILE *fp;
	fp=fopen("file5.txt","a");
		printf("Enter your name:");
		gets(str);
	fputs(str,fp);
   fclose(fp);
}
