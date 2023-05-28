#include<stdio.h>
#include<windows.h>
#include<conio.h>
typedef struct
{
	int id;
	char title[30];
	float price;
 }book;
void main()
{
	system("color 0e");
	int i=1;
	book b;
	FILE *fp;
	fp=fopen("myfile.B","r");
    while(fread(&b,sizeof(b),1,fp)>0)
{
	printf(" Book:%d\n BOOK ID:%d\n TITLE:%s\n PRICE:%fRs\n",i,b.id,b.title,b.price);
	i++;
	}
	fclose(fp);
	getch();
}
