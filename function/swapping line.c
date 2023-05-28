#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s;
	printf("Enter value of x=");
	scanf("%d",&a);
	printf("Enter value of y=");
	scanf("%d",&s);
	s=a+s-(a=s);
	printf("Values after swapping:\n");
	printf("\t\tx=%d \n\t\ty=%d",a,s);
	getch();	
}
