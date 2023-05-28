#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
    system("color 0b");
    int i,j,k,line,num;
    char ch;
    printf("Enter number of lines:");
    scanf("%d",&line);
    for(i=1;i<=line;i++){
            k=1;
            num=1;
            ch='A';
        for(j=1;j<=2*line-1;j++){
            if(j>=line+1-i&&j<=line-1+i){
                if(k){
                    if(i%2==1)
                        printf("%d",num++);
                    else
                        printf("%c",ch++);
                }
            else
                printf(" ");
            k=1-k;
        }
                else
                    printf(" ");
        }
      printf("\n");
    }
getch();
}
