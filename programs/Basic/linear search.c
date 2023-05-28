#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    system("color 0c");
    int c,n,search;
    printf("ENTER THE NUMBER OF ELEMENTS IN ARRAY:");
    scanf("%d",&n);
    int array[n];
    printf("ENTER %d INTEGER:\n",n);
    for(c=0;c<n;c++){
        scanf("%d",&array[c]);
    }
    printf("ENTER THE NUMBER TO SEARCH:");
    scanf("%d",&search);
    for(c=0;c<n;c++)
    {
      if(array[c]==search){
        printf("%d IS PRESENT AT %d POSITION:",search,c+1);
        break;
    }
}
   if(c==n)
    printf("%d IS NOT PRESENT IN ARRAY:",search);
   getch();
}
