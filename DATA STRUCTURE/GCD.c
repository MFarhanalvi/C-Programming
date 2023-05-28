#include<stdio.h>
#include<conio.h>
#include<windows.h>
int gcd(int a,int b)
{
    if(a==b)
    return (a);
    if(a%b==0)
    return(b);
    if(b%a==0)
        return(a);
    if(a>b)
        return (gcd(a%b,b));
    else
        return(gcd(a,b%a));
}
int main()
{
    system("color 0b");
    int a,b;
    printf("\n\tEnter 1st number for GCD:");
    scanf("%d",&a);
    printf("\n\tEnter 2nd number for GCD:");
    scanf("%d",&b);
    printf("\n\tGCD OF (%d,%d):%d",a,b,gcd(a,b));
    getch();
}
