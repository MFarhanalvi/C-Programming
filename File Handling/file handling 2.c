#include<stdio.h>
int  main()
{
	int i;
	FILE *fp;
	char s[100];
	fp=fopen("f2.txt","w");
	if (fp==NULL)
	{
		printf("File not open");
		exit(1);
	}
	printf("Enter Your name:");
	gets(s);
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);
    getch();
	fclose(fp);
}
