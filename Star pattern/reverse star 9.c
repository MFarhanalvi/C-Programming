#include<conio.h>
#include<stdio.h>
#include<windows.h>
void main()
{
    system("color 0b");
    int i,j,k,u;
    printf("Enter number of Rows:");
    scanf("%d",&u);
    for(i=0;i<=u;i++){
            k='A';
        for(j=1;j<=u*2+1;j++){
            if(j<=1+i||j>=u*2+1-i){
                printf("%c",k);
               j<(u*2)/2?k++:k--;
            }
            else{
                   printf(" ");
                   if(j==u+1)
                   k--;
            }
        }
        printf("\n");
    }
    getch();
}
