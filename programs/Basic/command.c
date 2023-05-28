#include<conio.h>
#include<windows.h>
#include<stdio.h>
int main(int argc,char *argv[])
{
    system("color 0a");
    int i;
    for(i=0;i<argc;i++)
    {
        printf("\n%s",argv[i]);
    }
    getch();
}
