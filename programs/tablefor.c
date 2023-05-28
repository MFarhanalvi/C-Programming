#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s;
	printf("Enter table number:");
	scanf("%d",&a);
	for(s=1;s<=10;s++)
	printf("%d*%d=%d\n",a,s,a*s);
	printf("Thank you!");
	getch();
}
