#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3],i,y;
	printf("Enter three number\n");
	for (i=0;i<3;i++)
	scanf("%d",&a[i]);
	for (i=0;i<3;i++)
	y= a[0]<a[1]?a[0]<a[2]?a[0]:a[2]:a[1]<a[2]?a[1]:a[2];
    printf("Smaller number is=%d",y);
	getch();
}
