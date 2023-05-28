#include<stdio.h>
#include<conio.h>
typedef struct
{
	int rollno,marks;
	float gpa;
}student;
void main()
{
	student s,*p,*m;
	p=&s;
	printf("Enter roll no:");
	scanf("%d",&p->rollno);
	printf("Enter marks:");
	scanf("%d",&p->marks);
	printf("Enter GPA:");
	scanf("%f",&p->gpa);
	m=&s;
	printf("Roll NO:%d\n",*&m->rollno);
	printf("Marks:%d\n",*&m->marks);
	printf("GPA:%f",*&m->gpa);
	getch();
}
