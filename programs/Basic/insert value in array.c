#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    system("color 0f");
    int position,c,n,value;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d element:",n);
    for(c=0;c<n;c++)
        scanf("%d",&array[c]);
    printf("Enter the Location where you wish to insert a number:");
    scanf("%d",&position);
    printf("Enter the value to Insert:");
    scanf("%d",&value);
    for(c=n-1;c>=position-1;c--){
        //array[c]=array[c];
        array[position-1]=value;
    }
        for(c=0;c<n;c++)
            printf("%d ",array[c]);
            getch();
    }
