#include<conio.h>
#include<stdio.h>
void main()
{
	float  p,r,t,i;
	printf("Enter principal amount=");
	scanf("%f",&p);
	printf("Enter rate=");
    scanf("%f",&r);
	printf("Enter time=");
	scanf("%f",&t);
	printf("principal amount=Rs%f\n",p);
	printf("Rate=%f%%\n",r);
	printf("Time=%fyear\n",t);
	i=(p*r*t)/100;
	printf("Simple Interest amount=Rs %f ",i);
	getch();

}

