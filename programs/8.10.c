#include<conio.h>
#include<stdio.h>
typedef struct
{
	int marks;
	char gde;
}result;
typedef struct
{
	int rno;
	result r;
 }record;
 void main()
 {
 	record info;
 	printf("Enter roll no:");
	scanf("%d",&info.rno);
	printf("Enter marks:");
	scanf("%d",&info.r.marks);
	printf("Enter grade:");
	fflush(stdin);
	scanf("%c",&info.r.gde);
	printf("\n\t\t#Result#\n");
	printf("\t\tRoll No:%d\n",info.rno);
	printf("\t\tMarks:%d\n",info.r.marks);
	printf("\t\tGrade:%c",info.r.gde);
	getch();  
  
  } 
  
