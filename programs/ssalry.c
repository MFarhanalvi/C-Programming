#include<conio.h>
#include<stdio.h>
void main()
{
	int a;
	float n;
	printf("Enter your salary:");
	scanf("%d",&a);
	if(a>=20000)
	n=a-a*7.0/100.0;
	else if (a>=10000)
	n=a-1000;
	else
    n=a;
    printf("Your net salary=%fRs",n);
    getch();
}
