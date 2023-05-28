#include<conio.h>
#include<stdio.h>
union values
{
	int x;float y;char z;
};
void main()
{
	union values i1;
	i1.x=34;
	printf("x=%d",i1.x);
	i1.y=45.3;
	printf("\ny=%f",i1.y);
	i1.z='A';
	printf("\nz=%c",i1.z);
	getch();
	
}
