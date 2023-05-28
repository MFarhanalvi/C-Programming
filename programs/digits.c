#include<conio.h>
#include<stdio.h>
void main()
{
	int x,a,r,sum=0;
	printf("Enter an integer number:");
	scanf("%d",&x);
	a=x;
	while(a!=0)
	{
		r=a%10;
		if(r==10)
		sum=sum+a;
		else
		sum=sum+r;
		a=a/10;
	}
	printf("The sum of digits are:%d",sum);
	getch();
}
