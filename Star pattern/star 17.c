#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    system("color 0c");
    int i,j,k=0,n,u;
    printf("Enter number of Lines:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
            i<=(u+1)/2?k++:k--;
             n=1;
        for(j=1;j<=(u+1)/2;j++){
            if(j>=(u+1)/2+1-k){
                printf("%d",n);
                n++;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}
