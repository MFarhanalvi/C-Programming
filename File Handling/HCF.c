#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	system("color 0e");
	int a,s,h;
	printf("Enter two numbers for HCF:\n");
	scanf("%d%d",&a,&s);
	for(h=a<s?a:s;h>1;h--)
	if(a%h==0 && s%h==0)
	break;
	printf("HCF Of %d and %d=%d",a,s,h);
	getch();
}
