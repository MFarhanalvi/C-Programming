#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,r,x;
	for(n=1;n<=1000;n++)
	s=0;
	x=n;
	while(x!=0)
	{
		r=x%10;
		s=s+r*r*r;
		r=x/10;
	}
	if(s==n)
	printf("%d ",n);
	getch();
}
