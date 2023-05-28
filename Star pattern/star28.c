#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    int i,j,u=0;
    for(i=1;i<=5;i++){
            i<=3?u++:u--;
        for(j=1;j<=5;j++){
            if(j==4-u||j==3)
                printf("*");
            else
            {
            if(i==3&&j==2)
                printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}
