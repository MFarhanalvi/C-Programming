#include<conio.h>
#include<stdio.h>
typedef struct 
{
	int roll;
	int marks;
	float avg;
	char gde;
}stud;
void main()
{
	stud s1;
	printf("Enter Roll No:");
	scanf("%d",&s1.roll);
	printf("Enter marks:");
	scanf("%d",&s1.marks);
	printf("Enter Averge:");
	scanf("%f",&s1.avg);
	fflush(stdin);
	printf("Enter Grade:");
	scanf("%c",&s1.gde);
	printf("\n\n\tYour entered folloeing details:\n");
	printf("\tYour Roll No:%d\n",s1.roll);
	printf("\tYour Marks:%d\n",s1.marks);
	printf("\tAverge:%f\n",s1.avg);
	printf("\tGrade:%c\n",s1.gde);
	getch();
}
