#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    int i,j,k=0,u;
    printf("Enter number of Lines:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
            i<=(u+1)/2?k++:k--;
        for(j=1;j<=u;j++){
            if(j<=(u+1)/2+1-k||j>=(u+1)/2-1+k)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
  getch();
}
