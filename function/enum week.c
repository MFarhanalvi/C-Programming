#include<conio.h>
#include<stdio.h>
enum boolean
{
	false,true
};
enum boolean even(int x)
{
	if(x%2==0)
	return(true);
	else
	return(false);
}
void main()
{
	int n;
	enum boolean r;
	printf("Enter a number");
	scanf("%d",&n);
	r=even(n);
	if(r==true)
	printf("Even number:");
	else
	printf("Odd number:");
}

