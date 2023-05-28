#include<stdio.h>
#include<windows.h>
#include<conio.h>
int fib(int);
int main()
{
    system("color 0c");
    int a,n;
    printf("\n\tEnter terms for Fibonacci Series.");
    scanf("%d",&n);
    printf("\n\tFibonacci series of %d :\n\t",n);
    for(a=1;a<=n;a++)
    printf("%d ",fib(a));
    getch();
}
int fib(int a)
{
    if(a==1||a==2)
        return(1);
    else
        return(fib(a-1)+fib(a-2));
}
