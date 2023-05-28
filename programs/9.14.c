#include<conio.h>
#include<stdio.h>
int cd(int ,int);
void main()
{
	int a,s,d;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&s);
	d=cd(a,s);
	printf("Greatest common divisor is=%d",d);
	getch();
}
int cd(int x,int y)
{
	int g,i,n;
	if(x<y)
	n=x;
	else
	n=y;
	for(i=1;i<=n/2;i++)
	if(x%i==0 && y%i==0)
	g=i;
	return g;

}
