#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0b");
    int f=1,n,x;
    printf("Enter number to find Factorial:");
    scanf("%d",&n);
    x=n;
    while(x>=1){
    f=f*x;
    x--;
    }
    printf("Factorial of %d! is:%d",n,f);
    getch();
}
