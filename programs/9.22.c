#include<conio.h>
#include<stdio.h>
typedef struct
{
	int marks;
	char grade;
}test;
void show(test p);
void main()
{
	test t;
	printf("Enter marks:");
	scanf("%d",&t.marks);
	printf("Enter grade:");
	fflush(stdin);
	scanf("%c",&t.grade);
	show(t);
	getch();

}
 void show(test p)
{
	printf("\t\t___YourResult___\n");
	printf("\t\tMarks:%d",p.marks);
	printf("\n\t\tGrade:%c",p.grade);

}
