#include<conio.h>
#include<stdio.h>
void main()
{
	int a[10],i,m;
	for(i=0;i<10;i++)
{
	printf("Enter value:");
	scanf("%d",&a[i]);
}
 	m=a[0];
 	for(i=0;i<10;i++)
 	if(m<a[i])
	m=a[i];
	printf("Maximum value is :%d",m);
	getch();
}

