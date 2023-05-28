#include<conio.h>
#include<stdio.h>
void  main()
{
	int a,b,c,d,r;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("Enter value of b=");
	scanf("%d",&b);
	printf("Enter value of c=");
	scanf("%d",&c);
	printf("Enter value of d=");
	scanf("%d",&d);
	r=a*b/(-c*31%13)*d;
	printf("Enter Answer=%d",r);
	getch();
}
