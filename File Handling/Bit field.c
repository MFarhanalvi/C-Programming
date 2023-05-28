#include<stdio.h>
#include<conio.h>
typedef struct
{
	unsigned int d:3;
	unsigned int m:3;
	unsigned int y;
}date;
void main()
{
	date t={7,1,2020};
	printf("Size of t is %d",sizeof(t));
	getch();

}
