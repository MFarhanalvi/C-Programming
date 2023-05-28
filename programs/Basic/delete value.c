#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    system("color 0f");
    int position,c,n;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d element:",n);
    for(c=0;c<n;c++)
        scanf("%d",&array[c]);
    printf("Enter the Location where you wish to delete a number:");
    scanf("%d",&position);
    if(position>=n+1)
        printf("DELETION NOT POSSIBELE...\n");
     else
     {
         for(c=position-1;c<n;c++)
            array[c]=array[c+1];
         printf("Resultant array is:\n");
         for(c=0;c<n-1;c++)
            printf("%d ",array[c]);
     }
            getch();
    }
