#include<conio.h>
#include<stdio.h>
int fun(int s);
int  fact(int n);
void main()
{
	int a;
	printf("Result for folowing series:\t 1 + 1/1! + 1/2! + 1/3! + 1/4! +....+n \n");
	printf("Enter the maximum value of denominator:");
	scanf("%d",&a);
	fun(a);
	getch();
}
int fun(int s)
{
	int i;
	float t,sum=0;
	for(i=1;i<=s;i++)
	{
		t=1.0/fact(i);
		sum+=t;
	}
	printf("Sum of series:%f",sum+1);
}
	int fact(int n)
	{
	int p=1,i;
	for(i=1;i<=n;i++)
	p*=i;
	return p;
}
