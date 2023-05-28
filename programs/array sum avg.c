#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],i,s=0;
	float avg;
    for(i=0;i<5;i++)
	{
	printf("Enter a number=");
	scanf("%d",&a[i]);
	s=s+a[i];
}
   avg=s/5.0;
   printf("Sum of numbers=%d\n",s);
   printf("Average of numbers=%f",avg);
   getch();
}
