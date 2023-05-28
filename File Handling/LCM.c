#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	system("color 0e");
	int a,s,l;
	printf("Enter two numbers for LCM:");
	scanf("%d%d",&a,&s);
	for(l=a>s?a:s;l<=a*s;l=l+(a>s?a:s))
	if(l%a==0 && l%s==0)
	break;
	printf("LCM Of %d and %d=%d",a,s,l);
	getch();
}
