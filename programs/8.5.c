#include<conio.h>
#include<stdio.h>
typedef struct
{
	int ncode;
	int acode;
	double num;
}phone;
void main()
{
	phone p,p2={92,41,9220083};
	printf("Enter national code:");
	scanf("%d",&p.ncode);
	printf("Enter area code:");
	scanf("%d",&p.acode);
	printf("Enter Phone number:");
	scanf("%d",&p.num);
	printf("Phone Number 1: +%d-%d-%d\n",p.ncode,p.acode,p.num);
	printf("Phone Number 2: +%d-%d-%d",p2.ncode,p2.acode,p2.num);
	getch();
}
