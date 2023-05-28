#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s=0;
	printf("Sum of odd number Series::\n");
	printf("1+3+5+7....100\t\n");
	for(a=1;a<=100;a++)
	{
	if(a%2==0)
		continue;
		s=s+a;
	}
	printf("Sum of series=%d",s);
	getch();
}
