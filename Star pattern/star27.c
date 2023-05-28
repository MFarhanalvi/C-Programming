#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    int i,j,k,u;
    printf("Enter number of Rows:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
            k=64+i;
        for(j=1;j<=u;j++){
            if(j<=i){
                printf("%c",k);
                k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
