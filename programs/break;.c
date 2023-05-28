#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s;
	for(s=0;s<=5;s++)
	{
	printf("Enter a number=");
	scanf("%d",&a);
	if(a<=0)
	break;
	printf("You entered %d\n",a);	
	}
	getch();
}
