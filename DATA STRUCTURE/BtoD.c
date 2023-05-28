#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdio.h>
#include<math.h>
int BtoD(int n);
int main()
{
    system("color 0b");
    int n,d;
    printf("\n\n\tCONVERSION OF BINARY TO DECIMAL.\n\n");
    printf("\tEnter a number in Binary System:");
    scanf("%d",&n);
    printf("\n\tNumber in Decimal System:%d",BtoD(n));
    getch();
}
int BtoD(int n)
{
    int decimalnumber=0,i=0,remainder;
    while(n!=0)
    {
        remainder=n%10;
        n/=10;
        decimalnumber+=remainder*pow(2,i);
        i++;
    }
    return(decimalnumber);
}
