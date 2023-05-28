#include<stdio.h>
#include<windows.h>
int main()
{
    system("color 0c");
	int i;
	FILE *fp;
	char s[]="hello world\nHello Student:";
	fp=fopen("f1.txt","w");
	if (fp==NULL)
	{
		printf("File not open");
		exit(1);
	}
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
	fclose(fp);
	getch();
}
