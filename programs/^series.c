#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	 int i,n,x;
	 float s=0,d;
	 printf("series=1 + 1/x + 1/x^2 + 1/x^3 + 1/x^4 + . . . + n \n\n\n");
	 printf("Enter the value of x=");
	 scanf("%d",&x);
     printf("Enter the value of range=");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     	d=pow (x,i);
     	s=s+(1/d);
	 }
      printf("Sum of series=%f",s);
      getch();

}

