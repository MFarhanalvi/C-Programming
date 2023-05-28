#include<stdio.h>
#include<windows.h>
#include<conio.h>
int sum(int);
int main()
{
    system("color 0b");
    int n;
    printf("\n\tEnter a number:");
    scanf("%d",&n);
    printf("\n\tSUM OF %d Square:%d\n",n,sum(n));
   getch();
}
int sum(int n)
{
        if(n==1)
        return 1;
    return(n*n+sum(n-1));
}
