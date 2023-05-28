#include<conio.h>
#include<stdio.h>
float area(float b,float c);
void main()
{
    float x,y,s;
	printf("Find Area?\n");
	printf("Length=");
	scanf("%f",&x);
	printf("Width=");
	scanf("%f",&y);
   	s=area(x,y);
	printf("Area=%f sq unit",s);
    getch();
}
 float area(float b,float c)
{
	float a;
	a=b*c;
    return(a);
}
