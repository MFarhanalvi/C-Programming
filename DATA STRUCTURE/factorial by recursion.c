#include<stdio.h>
#include<conio.h>
#include<windows.h>
long long fact(int n)
{
    if(n>0)
        return(n*fact(n-1));
    else
        return 1;


}
int main()
{
    system("color 0c");
    int n;
    printf("\n\tEnter a number:");
    scanf("%d",&n);
    printf("\n\tThe factorial of %d! is %lld:",n,fact(n));
    getch();
    return(0);
}
