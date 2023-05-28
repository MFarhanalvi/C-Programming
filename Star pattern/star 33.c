#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0a");
    int i,j,k,u;
    printf("Enter number of Lines:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
            k='A';
        for(j=1;j<=2*u-1;j++){
            if(j<=u+1-i||j>=u-1+i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();

}
