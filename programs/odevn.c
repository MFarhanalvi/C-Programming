#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s=0,o=0;
	printf("Enter a number=");
	scanf("%d",&a);
	while(a>=0)
	{
		if(a%2==0)
		s=s+a;
		else
		o=o+a;
		a--;
	}
	printf("The sum of even digit is =%d\n",s);
	printf("The sum of odd digit is=%d",o);
	getch();
}
