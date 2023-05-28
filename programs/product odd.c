#include<conio.h>
#include<stdio.h>
void main()
{
	int n,s=1,a;
	printf("Enter a number:");
	scanf("%d",&a);
    for(n=1;n<=a;n=n+2)
	s*=n;
	printf("Result=%d",s);	
	getch();
}
