#include<stdio.h>
#include<conio.h>
void main()
{
	system("color 0e");
	char ch;
	FILE *fp;
	fp=fopen("ali.txt","r");
	if(fp==NULL)
	{
		printf("File not Found:");
		exit(1);
	}
	ch=fgetc(fp);
	while(!feof(fp))
	{
	printf("%c",ch);
	ch=fgetc(fp);
}
fclose(fp);
getch();
}
