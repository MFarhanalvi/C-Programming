#include<conio.h>
#include<stdio.h>
typedef struct
{
	int no;
	char fname[10],sname[10];
	float hours,gross,pyrte;
 }Employe;
void main()
{
	Employe e;
	printf("Enter the employee's number:");
	scanf("%d",&e.no);
	printf("Enter the employee's first name:");
	fflush(stdin);
	gets(e.fname);
	printf("Enter the employee's second name:");
	fflush(stdin);
	gets(e.sname);
	printf("Enter number of hours worked:");
	scanf("%f",&e.hours);
	printf("Enter hourly pay rate:");
	scanf("%f",&e.pyrte);
	e.gross=e.hours*e.pyrte;
	printf("\n\n\n\t\t*****Employee's Payroll Data:******\n\n\n");
	printf("Name:\n");
	puts(e.fname);
	puts(e.sname);
    printf("Number:%d\n",e.no);
    printf("Hours Worked:%f\n",e.hours);
    printf("Hourly Pay Rate:%f\n",e.pyrte);
    printf("Gross Pay:%fRs",e.gross);
getch();
}

