#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    system("color 0a");
    int a[10],i,j,min,max,temp;
    while(1){
    system("cls");
    min=0;
    max=min+1;
    srand(time(NULL));
    for(i=1;i<=10;i++){
        temp=rand()%10+max;
        for(j=1;j<=i-1;j++){
      if(temp==a[j])
        break;
        }
        if(i==j)
        a[i]=temp;
        else
            i--;
    }
           for(i=1;i<=10;i++)
            printf("%d ",a[i]);
            getch();
            }
getch();
}
