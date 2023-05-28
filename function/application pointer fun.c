#include<conio.h>
#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,s;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of s=");
	scanf("%d",&s);
    swap(&a,&s);
    printf("a=%d\ns=%d",a,s);
	getch();	
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
