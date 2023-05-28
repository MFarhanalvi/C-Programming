//PHONE DIRECTORY APPLICATION:
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<process.h>
#define FLUSH fflush(stdin)
void gotoxy(int x,int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void loading()
{
    int r,q;
    system("color 0A");
    printf("\t    LOADING...");
    gotoxy(60,32);
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=10000000;q++);
        printf("%c",219);
    }
}
typedef struct
{
    char name[20];
    char number[13];
}phone,w,d,ds,del,u;
//WRITE DATA IN FILE:
void write()
{
    int r,q;
    phone w;
    FILE *fp;
    fp=fopen("directory.b","ab");
    printf("\n\n\n\tENTER CONTACTS NAME:");
    FLUSH;
    gets(w.name);
    strupr(w.name);
    printf("\n\n\n\tENTER CONTACTS NUMBER:");
    FLUSH;
    gets(w.number);
    fwrite(&w,sizeof(w),1,fp);
    gotoxy(30,18);
    printf("CONTACT SAVING...");
    gotoxy(30,20);
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=1000000;q++);
        printf("%c",219);
    }
    gotoxy(30,22);
    printf("CONTACT SAVE SUCCESSFULLY!!!");
    fclose(fp);
}
//DISPLAY FUNCTION:
void display(char nam[])
{
    phone d;
    int i=1,cmp,j=0,x=40,y=19,r,q,Y=20,X=40;
   FILE *fp;
   fp=fopen("directory.b","rb");
   gotoxy(40,12);
    printf("SEARCHING...");
    gotoxy(40,14);
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=1000000;q++);
        printf("%c",219);
    }
   while(fread(&d,sizeof(d),1,fp)>0){
   if(fp==NULL){
    gotoxy(40,16);
    printf("FILE IS EMPTY!!!");}
    cmp=strcmp(d.name,nam);
    if(cmp==0){
        j=1;
    strupr(d.name);
    gotoxy(40,16);
    printf("============================================");
    gotoxy(40,17);
    printf("SR#NO||CONTACTS     NAME   ||CONTACTS NUMBER");
    gotoxy(40,18);
    printf("============================================");
    gotoxy(x,y);
    printf("%d    ||",i);
    gotoxy(x+7,y);
    printf("                    ||");
    gotoxy(x+7,y);
    printf("%s",d.name);
    gotoxy(x+32,y);
    printf("%s",d.number);
    gotoxy(X,Y);
    printf("============================================");
    y++;
    y++;
    Y++;
    Y++;
    i++;
    }
}
   if(j==0){
        gotoxy(40,16);
        printf("SORRY!!!  NO CONTACTS FOUND!");}
   fclose(fp);
}
//DISPLAY ALL RECORD:
void alldisplay()
{
    phone ds;
      int i=1,f=0,X=40,Y=20,x=40,y=19,r,q;
   FILE *fp;
   fp=fopen("directory.b","rb");
    gotoxy(40,10);
    printf("LOADING FILES...");
    gotoxy(40,12);
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=1000000;q++);
        printf("%c",219);
    }
   while(fread(&ds,sizeof(ds),1,fp)>0){
        f=1;
        strupr(ds.name);
    gotoxy(40,16);
    printf("============================================");
    gotoxy(40,17);
    printf("SR#NO||CONTACTS     NAME   ||CONTACTS NUMBER");
    gotoxy(40,18);
    printf("============================================");
    gotoxy(x,y);
    printf("%d    ||",i);
    gotoxy(x+7,y);
    printf("                    ||");
    gotoxy(x+7,y);
    printf("%s",ds.name);
    gotoxy(x+32,y);
    printf("%s",ds.number);
    gotoxy(X,Y);
    printf("============================================");
    y++;
    y++;
    Y++;
    Y++;
    i++;
    }
    if(f==0){
        gotoxy(40,16);
        printf("FILE IS EMPTY!!!");}
   fclose(fp);
}
//DELETE RECORD:
void delet(char nam[])
{
    phone del;
    FILE *fp,*temp;
    int res,f=0,r,q;
    fp=fopen("directory.b","rb");
    temp=fopen("temp.b","ab");
    gotoxy(40,12);
    printf("CONTACT DELETED...");
    gotoxy(40,14);
    for(r=1;r<=30;r++){
    for(q=0;q<=1000000;q++);
     printf("%c",219);}
    while(fread(&del,sizeof(del),1,fp)>0){
        res=strcmp(del.name,nam);
        if(res==0){
            f=1;
        gotoxy(40,16);
        printf("CONTACT DELETED SUCCESSFULLY!");}
        else
        fwrite(&del,sizeof(del),1,temp);
    }
        if(f==0){
        gotoxy(40,16);
        printf("CONTACT NOT FOUND!!!");}
        fclose(fp);

        fclose(temp);

        fp=fopen("directory.b","wb");
        fclose(fp);

        fp=fopen("directory.b","ab");
        temp=fopen("temp.b","rb");
         while(fread(&del,sizeof(del),1,temp)>0)
        {
        fwrite(&del,sizeof(del),1,fp);
        }
        fclose(fp);
        fclose(temp);
        remove("temp.b");
        fclose(fp);
}
//UPDATE RECORD:
void update()
{
    phone u;
    char nam[20];
   FILE *fp,*temp;
    int res,f=0,r,q;
    fp=fopen("directory.b","rb");
    temp=fopen("temp.b","ab");
    gotoxy(30,10);
    printf("ENTER CONTACT NAME THAT YOU WANT TO UPDATE:");
    FLUSH;
    gets(nam);
    strupr(nam);
    while(fread(&u,sizeof(u),1,fp)>0){
        res=strcmp(u.name,nam);
        if(res==0){
       f=1;
    gotoxy(40,16);
    printf("ENTER CONTACTS NAME:");
    FLUSH;
    gets(u.name);
    strupr(u.name);
    gotoxy(40,18);
    printf("ENTER CONTACT NUMBER:");
    FLUSH;
    gets(u.number);
    fwrite(&u,sizeof(u),1,temp);
    gotoxy(40,20);
    printf("CONTACT UPDATED...");
    gotoxy(40,22);
    for(r=1;r<=30;r++){
    for(q=0;q<=1000000;q++);
     printf("%c",219);}
     gotoxy(40,24);
     printf("CONTACTS UPDATE SUCCESSFULLY!");
        }
      else{
        fwrite(&u,sizeof(u),1,temp);
        }
    }
        if(f==0){
        gotoxy(40,16);
        printf("CONTACTS NOT FOUND!!!");
        }
        fclose(fp);
        fclose(temp);

        fp=fopen("directory.b","b");
        fclose(fp);

        fp=fopen("directory.b","ab");
        temp=fopen("temp.b","b");
         while(fread(&u,sizeof(u),1,temp)>0)
        {
        fwrite(&u,sizeof(u),1,fp);
        }
        fclose(fp);
        fclose(temp);
        remove("temp.b");
        fclose(fp);
}
//MENU OF PROGRAME:
int menu()
{
    int ch;
    gotoxy(60,3);
    printf("=======================");
    gotoxy(60,4);
    printf("    PHONE_DIRECTORY    ");
    gotoxy(60,5);
    printf("=======================");
    gotoxy(30,8);
    printf("1: TO SAVE CONTACTS:");
     gotoxy(30,10);
    printf("2: TO SEARCH CONTACTS:");
     gotoxy(30,12);
    printf("3: TO DELETE CONTACTS:");
     gotoxy(30,14);
    printf("4: TO UPDATE CONTACTS:");
     gotoxy(30,16);
    printf("5: TO VIEW ALL CONTACTS:");
     gotoxy(30,18);
    printf("6: EXIT PROGRAME:");
     gotoxy(34,20);
    printf("   ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    return(ch);
}
//MAIN FUNCTION:
int main()
{
    char nam[20];
    system("color 0b");
    gotoxy(50,6);
    printf("MADE_BY");
    gotoxy(50,7);
    printf("ALI_RAZA_JUTT");
    gotoxy(50,8);
    printf("==============================================");
    gotoxy(50,9);
    printf("||==========================================||");
    gotoxy(50,11);
    printf("||             PHONE_APPLICATION            ||");
    gotoxy(50,13);
    printf("||==========================================||");
    gotoxy(50,14);
    printf("==============================================");
    gotoxy(50,30);
    loading();
    gotoxy(0,60);
    printf("PRESS ANY KEY TO CONTINUE...");
    getch();
    while(1){
            system("CLS");
            system("color 0b");
    switch(menu()){
    case 1:
           system("CLS");
           gotoxy(30,6);
           printf("PLEASE INSERT FOLLOWING DATA");
           write();
           break;
    case 2:
           system("CLS");
           system("color 0c");
           gotoxy(50,5);
           printf("=============");
           gotoxy(50,6);
           printf("SEARCH-ENGINE");
           gotoxy(50,7);
           printf("=============");
           gotoxy(30,10);
           printf("ENTER CONTACTS NAME THAT YOU WANT TO SEARCH:");
           FLUSH;
           gets(nam);
           strupr(nam);
           display(nam);
           break;
    case 3:
        system("CLS");
        system("color 0d");
        gotoxy(50,5);
        printf("====================");
        gotoxy(50,6);
        printf("DELETION_OF_CONTACTS");
        gotoxy(50,7);
        printf("====================");
        gotoxy(30,10);
        printf("ENTER CONTACTS NAME THAT YOU WANT TO DELETE:");
        FLUSH;
        gets(nam);
        strupr(nam);
        delet(nam);
        break;
    case 4:
        system("CLS");
        system("color 06");
        gotoxy(50,5);
        printf("===============");
        gotoxy(50,6);
        printf("UPDATE_CONTACTS");
        gotoxy(50,7);
        printf("===============");
        update();
        break;
    case 5:
        system("CLS");
        system("color 09");
          gotoxy(50,5);
           printf("===================");
           gotoxy(50,6);
           printf("ALL_CONTACTS_RECORD");
           gotoxy(50,7);
           printf("===================");
           gotoxy(30,10);
        alldisplay();
        break;
    case 6:
        exit(0);
    default:
        gotoxy(34,22);
        printf("\n\tINVALID CHOICE!!!");
    }
    getch();
}

    return 0;
}
