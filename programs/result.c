#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s,d;
	float j;
	printf("Marks in 1st subject=");
	scanf("%d",&a);
	printf("Marks in 2nd subject=");
	scanf("%d",&s);
	printf("Marks in 3rd subject=");
	scanf("%d",&d);
	j=a+s+d/3.0;
	if(j>=80)
	printf("You are above standard!\n Admission granted!");
	else
        printf("sorry!\nAdmission not granted!");
	getch();
}
