#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    int i,j,u;
    printf("Enter number of Lines:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
        for(j=1;j<=u;j++){
            if(j==i||j==u+1-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
