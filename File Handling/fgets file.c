#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	system("color 0e");
	char str[10];
	FILE *fp;
	fp=fopen("jutt.txt","r");
	if(fp==NULL)
	{
		printf("File not Found:");
		exit(1);
	}
	while(fgets(str,8,fp)!=NULL)
	{
	printf("%s",str);
  }
   fclose(fp);
   getch();
}
