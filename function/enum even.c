#include<conio.h>
#include<stdio.h>
enum boolean even(int x);
enum boolean
{
	false,true
};
void main()
{
	int n;
	enum boolean r;
	printf("Enter a number:");
	scanf("%d",&n);
	r=even(n);
	if(r==true)
	printf("Even number:");
	else
	printf("Odd number:");
getch();
}
enum boolean even(int x)
{
	if(x%2==0)
	return(true);
	else
	return(false);
}


