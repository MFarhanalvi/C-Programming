#include<stdio.h>
#include<conio.h>
#include<windows.h>
typedef struct
{
	int id;
	char title[30];
	float price;
 }book;
void main()
{
	system("color 0e");
	book b;
	FILE *fp;
	fp=fopen("myfile.B","a");
	printf("Enter Book ID:");
	scanf("%d",&b.id);
	printf("Enter Book Title:");
	fflush(stdin);
	gets(b.title);
	printf("Enter Book Price:");
	scanf("%f",&b.price);
	fwrite(&b,sizeof(b),1,fp);
	fclose(fp);
}
