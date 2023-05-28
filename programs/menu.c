#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s,d;
	printf("HEALTH CLUB MEMBERSHIP MENU:\n\n");
	printf("1.Standard Adult Membership.\n");
	printf("2.Child Membership.\n");
	printf("3.Senior Citizen Membership.\n");
	printf("4.Quit the programe.\n");
	printf("Enter your choice:");
	scanf("%d",&a);
	if(a<=3)
	{
		printf("For how many months?=");
		scanf("%d",&s);
		switch(a)
		{
			case 1:
				d=s*50;
				break;
			case 2:
				d=s*20;
	           break;
			 case 3:
			 d=s*30;
			 break;	
		}
		printf("The total charges are:Rs%d",d);
	}
	else
	printf("Invalid choice!\n sorry!");
	getch();

}
