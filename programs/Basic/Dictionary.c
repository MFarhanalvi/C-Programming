#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int main()
{
    system("color 0b");
    char str[5][10],s[10];
    int i,r,round;
    printf("\n\n\tEnter five names:\n");
    for(i=0;i<=4;i++)
    gets(str[i]);
    for(round=1;round<=4;round++){
            for(i=0;i<=4-round;i++){
        r=strcmp(str[i],str[i+1]);
          if(r>0){
        strcpy(s,str[i]);
        strcpy(str[i],str[i+1]);
        strcpy(str[i+1],s);
    }
  }
}
     printf("\n\tStrings in dictionary order:\n\n");
     for(i=0;i<=4;i++){

     strupr(str[i]);
        puts(str[i]);
     }
getch();
}
