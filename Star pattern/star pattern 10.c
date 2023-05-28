#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0e");
    int i,j,k=0,rows,n;
    printf("Enter number of Rows:");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++){
            if(rows%2==0){
                if(i<=n) k++;
                if(i>n+1) k--;
            }
            else
            i<=n?k++:k--;
        for(j=1;j<=rows;j++){
            if(j>=n+1-k&&j<=n-1+k)
            printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
