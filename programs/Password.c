#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#define TAB 9
#define BKSP 8
#define SPACE 32
#define ENTER 13
int main()
{
    system("color 0b");
    int i=0,r;
    char ch;
    char key[100]={'$','j','u','t','t','0','0','7'};
    char  password[100];
    printf("\n\n\t\tEnter a password:");
    while(1)
    {
        ch=getch();
        if(ch==ENTER){
            password[i]='\0';
            break;        }
    else if(ch==BKSP){
        if(i>0){
            i--;
        printf("\b \b");
        }
    }
    else if(ch==TAB||ch==SPACE)
    {
        continue;
    }
    else
    {
        password[i]=ch;
        i++;
        printf("*");
    }
    }
    // strupr(password);
   r=strcmp(key,password);
   if (r==0)
   {
       printf("\nPassword correct!");
   }
   else{
       printf("\nIncorrect Password!");
   }
 printf("\n\n\t\t Your Password is:%s",password);

   printf("\n\n\t\t Length:%d",i);
   getch();
   return 0;
}

