#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],s,y=1;
	printf("Enter five numbers\n");
	for ( s=0;s<5;s++)
	scanf("%d",&a[s]);
	for (s=0;s<5;s++)
	y=y*a[s];
	printf("Answer=%d",y);
	getch();
}
