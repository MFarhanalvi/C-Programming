#include<conio.h>
#include<stdio.h>
typedef struct
{
	float length;
	float width;
}dimension;
typedef struct
{
	float area,paremetre;
}result;
typedef struct
{
	dimension size;
	result recd;
}rectangle;
void main()
{
	rectangle R;
	printf("Enter the length of rectangle:");
	scanf("%f",&R.size.length);
	printf("Enter width of rectangle:");
	scanf("%f",&R.size.width);
	R.recd.area=R.size.length*R.size.width;
	R.recd.paremetre=2.0*R.size.length+2.0*R.size.width;
	printf("The area of rectangle=%f",R.recd.area);
	printf("\nThe Perimetre of rectangle=%f",R.recd.paremetre);
	getch();
}
