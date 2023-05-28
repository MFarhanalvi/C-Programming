#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
	int l,u,x,i;
	system("color 0e");
	printf("Enter two numbers:\n");
	scanf("%d %d",&l,&u);
	printf("\tPrime numbers b/w %d and %d are:\n",l,u);
	for(x=l+1;x<=u-1;x++)
	{
		for(i=2;i<x;i++)
		if(x%i==0)
		break;
		if(i==x)
		printf("%d ",x);
	}
	getch();
}
