#include<stdio.h>
#include<conio.h>
#include<windows.h>
typedef struct
{
	int roll;
	char name[30],dep[30];
 }student;
void main()
{
	system("color 0e");
	student s;
	FILE *fp;
	fp=fopen("student","ab");
	printf("Enter your name:");
	gets(s.name);
	printf("Enter your Roll no:");
	scanf("%d",&s.roll);
	printf("Enter Department:");
	fflush(stdin);
	gets(s.dep);
	fwrite(&s,sizeof(s),1,fp);
	fclose(fp);
}
