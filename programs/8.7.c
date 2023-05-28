#include<conio.h>
#include<stdio.h>
typedef struct 
{
	int marks;
	char grade;
}result;
void main()
{
	result r,r2;
	printf("Enter marks:");
	scanf("%d",&r.marks);
	printf("Enter grade:");
	fflush(stdin);
    scanf("%c",&r.grade);
	r2=r;
	printf("The first record is as follows:\n");
	printf("Marks:%d\n",r.marks);
	printf("Grade:%c\n",r.grade);
	printf("The second record is as follows:");
	printf("\nMarks:%d",r2.marks);
	printf("\nGrade:%c",r2.grade);
	getch();
}
