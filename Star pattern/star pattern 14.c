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
            k=u-i;
        for(j=1;j<=u;j++){
            if(j<=u+1-i){
                printf("%d",k);
                k--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    getch();
}
