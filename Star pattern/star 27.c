#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    int i,j,u;
    system("color 0e");
    printf("Enter number of Lines:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
        for(j=1;j<=2*u-1;j++){
            if(j==u+1-i||j==u-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
