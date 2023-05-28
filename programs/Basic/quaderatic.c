#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
int main()
{
    system("color 0b");
    float x,y,a,b,c,D;
    printf("\n\n\n\tQUADERATIC EQUATION\n\tax^2+bx+c=0");
    printf("\n\n\tPUTTING VALUES OF a,b,c:\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n\ta=%f  b=%f  c=%f",a,b,c);
    D=b*b-4*a*c;
    if(D<0){
        printf("\n\tBOTH ROOTS ARE IMAGINARY:\n");
        x=(-b+sqrt(D))/(2.0*a);
        y=(-b-sqrt(D))/(2.0*a);
        printf("\n\tX=%f  Y=%f",x,y);
    }
    if(D==0){
        printf("\n\tBOTH ROOTS ARE EQUAL:");
        x=-b/(2.0*a);
        y=-b/(2.0*a);
        printf("\n\tX=%f  Y=%f",x,y);
    }
    if(D>0){

        printf("\n\tROOTS ARE REAL AND DISTINCT:");
    x=(-b+sqrt(D))/(2.0*a);
    y=(-b-sqrt(D))/(2.0*a);
    printf("\n\tX=%f  Y=%f ",x,y);
    }
    printf("\n\tROOTS ARE(%f,%f)",x,y);
    getch();
}
