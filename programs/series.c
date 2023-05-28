#include<conio.h>
#include<stdio.h>
void main()
{
	   float a,s;
	   a=2.0;
	   s=1.0;
	   while(a<=100.0)
    {
    	s=s+1.0/a;
    	a=a+2;
	}
	printf("Answer=%f",s);
	getch();
}
