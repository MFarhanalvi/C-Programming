#include<stdio.h>
#include<conio.h>
#include<windows.h>
void DtoB();
int main()
{
    system("color 0b");
    int n;
    printf("\n\n\tCONVERSION OF DECIMAL TO BINARY.\n\n");
    printf("\tEnter a number in Decimal System:");
    scanf("%d",&n);
    printf("\n\tNumber in Binary System:");
    DtoB(n);
    getch();
}
void DtoB(int n)
{
    if(n==1)
    printf("1");
    else
    {
        DtoB(n/2);
        printf("%d",n%2);
    }
}
