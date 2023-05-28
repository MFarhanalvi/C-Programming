#include<stdio.h>
typedef struct
{
	char name[20];
	char father[20];
	int roll;
}student;
void main()
{
	int i=1;
	system("color 0B");
	FILE *fp;
	fp=fopen("stud.txt","a+");
	student s;
	while(fscanf(fp,"%s%s%d",&s.name,&s.father,&s.roll)>0)
	{
	printf("\n%d.Name:%s\nFather name:%s\nRoll no:%d",i,s.name,s.father,s.roll);
	i++;
}
	fclose(fp); 
	getch();
}
