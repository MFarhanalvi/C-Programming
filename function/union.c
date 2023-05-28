#include<conio.h>
#include<stdio.h>
union student input();
union student 
{
	char name[20];
	int  no;
	int age;	
};
void main()
{
	union student s1;
	s1=input();
	getch();
}
  union student  input()
  {
  union student s;
	printf("Enter your name:");
    scanf("%c",s.name);
	fflush(stdin);
	printf("Enter your roll no:");
	scanf("%d",&s.no);
	printf("Enter your age:");
	scanf("%d",&s.age);
	return(s);
} 

