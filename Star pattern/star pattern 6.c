#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0d");
    int i,j,k,r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
            k=1;
            for(j=1;j<=2*r-1;j++){
        if(j>=r+1-i&&j<=r-1+i&&k){
                printf("*");
                k=0;
            }
        else
        {
            printf(" ");
            k=1;
    }
    }
    printf("\n");
}
getch();
}
