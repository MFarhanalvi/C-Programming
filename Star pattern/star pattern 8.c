#include<conio.h>
#include<stdio.h>
#include<windows.h>
void main()
{
    system("color 0b");
    int i,j,k,r;
    printf("Enter number of rows:");
    scanf("%d",&r);
    for(i=1;i<=r;i++){
            k=1;
        for(j=1;j<=r*2-1;j++){
            if(j>=r+1-i&&j<=r-1+i){
                printf("%d",k);
             j<(r*2)/2?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
