#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    int i,j,u;
    printf("Enter number of Li2nes:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
        for(j=1;j<=u;j++){
            if((i==1||i==u||j==1||j==u)||(i>=(u+1)/2-1&&i<=(u+1)/2+1&&j>=(u+1)/2-1&&j<=(u+1)/2+1))
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
getch();
}
