#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    int first,last,n,search,middle,array[5],c;
    printf("ENTER NUMBER OF ELEMENTS IN ARRAY:");
    scanf("%d",&n);
    printf("Enter %d Integers:\n",n);
    for(c=0;c<n;c++)
    scanf("%d",&array[c]);
    printf("ENTER VALUE TO FIND:");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last){
        if(array[middle]<search)
            first=middle+1;

        else if(array[middle]==search){
            printf("%d IS FOUND AT LOCATION %d:",search,middle+1);
            break;
        }
        else
            last=middle-1;
        middle=(first+last)/2;

    }
    if(first>last)
        printf("NOT FOUND! %d IS NOT PRESENT IN ARRAY",search);
    getch();
}
