#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	float avg,y;
	printf("Enter five numbers\n");
	for (i=0;i<5;i++)
	scanf("%d",&a[i]);
	for (i=0;i<5;i++)
	sum=sum+a[i];
	avg=sum/5.0;
	printf("Average=%f\n",avg);
	y=avg*100;
	printf("percentage=%f",y);
	getch();
}
