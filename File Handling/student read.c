#include<stdio.h>
typedef struct
{
	int roll;
	char name[30],dep[30];
 }student;
void main()
{
	system ("color 0e");
	student s;
	FILE *fp;
	fp=fopen("student","rb");
	while(fread(&s,sizeof(s),1,fp)>0)
	{
		printf(" %s\n %d\n %s\n",s.name,s.roll,s.dep);
	}
	fclose(fp);
getch();
}
