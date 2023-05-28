#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s=0,r;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		r=a%10;
		s=s*10+r;
		a=a/10;
	}
	printf("Reverse is =%d",s);
	getch();
}
