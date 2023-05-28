#include<conio.h>
#include<stdio.h>
#include<windows.h>
void main()
{
    system("color 0b");
    int i,j,k,u;
    printf("Enter number of Rows:");
    scanf("%d",&u);
    for(i=1;i<=u;i++){
            k='A';
        for(j=1;j<=2*u-1;j++){
            if(j<=u+1-i||j>=u-1+i){
                printf("%c",k);
               j<(u*2)/2?k++:k--;
            }
            else{
                   printf(" ");
                   if(j==u)
                   k--;
            }
        }
        printf("\n");
    }
    getch();
}
