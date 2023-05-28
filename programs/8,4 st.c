#include<conio.h>
#include<stdio.h>
typedef struct
{
	int eid;
	int esalry;
}employe;
void main()
{
	employe info={20,18000};
	printf("Employee ID:%d\n",info.eid);
	printf("Salary:%dRs",info.esalry);
	getch();
}
