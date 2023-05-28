#include<conio.h>
#include<stdio.h>
void max(int a,int b);
void min(int j,int k);
void main()
{
	int x,y,s,d;
	printf("Enter two number:\n");
	scanf("%d%d",&x,&y);
	max(x,y);
	printf("Enter two number:\n");
	scanf("%d%d",&s,&d);
	min(s,d);
	getch();
}
void max(int a,int b) 
{
	if(a>b)
	printf("Maximum number:%d\n",a);
	else
	printf("Maximum number:%d\n",b);
}
void min(int j,int k)
{
	if(j<k)
	printf("Minimum number:%d",j);
	else
	printf("Minimum number:%d",k);
}
