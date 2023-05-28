#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s,d,f;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number for power:");
	scanf("%d",&s);
	d=1;
	f=1;
	do
	{
		f=f*a;
		d++;
	}
	while(d<=s);
	printf("Answer %d^%d:%d",a,s,f);
	getch();
}
