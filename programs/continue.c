#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s;
	for(s=1;s<=5;s++)
	{
	printf("Enter a number=");
	scanf("%d",&a);	
		if(a<=0)
		continue;
		printf("You entered %d\n",a);
	}
	getch();
}
