#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],i,*p;
	p=&a[0];
	for(i=0;i<=4;i++)
	{
	printf("Enter the number:");
    scanf("%d",p+i);
}
	for(i=0;i<=4;i++)
    printf("%d  ",*(p+i));
    getch();
  
  }   
