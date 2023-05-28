//PROGRAME FOR BOOKSHOP MANAGMENT:
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
  void gotoxy(int x,int y )
  {
 	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
  }
void loading()
{
     int r,q;
    printf("\n\n\t\tLOADING FILES...\n\n\t\t");
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=1000000;q++);
        printf("%c",219);
    }
}
typedef struct BOOK
{
    char name[25];
    char  mb[15];
    char book[25];
    char date[12];
    int  price;
}BOOK,del,update,writ,dis,dsl;
//DELETE FUNCTION:
void delet(char date[])
{
    FILE *fp,*temp;
    BOOK del;
    int res,f=0,r,q;
    fp=fopen("record.b","r");
    temp=fopen("temp.b","ab");

    while(fread(&del,sizeof(del),1,fp)>0){
        res=strcmp(del.date,date);
        if(res==0){
            f=1;
            printf("\n\n\n\t\tRECORD DELETED...\n\n\t\t");
             for(r=1;r<=30;r++){
        for(q=0;q<=1000000;q++);
        printf("%c",219);}
        }
        else{
        fwrite(&del,sizeof(del),1,temp);
        }
    }
        if(f==0){
        loading();
        printf("\n\n\t\tRECORD NOT FOUND!!!");
        }
        fclose(fp);
        fclose(temp);

        fp=fopen("record.b","w");
        fclose(fp);

        fp=fopen("record.b","ab");
        temp=fopen("temp.b","r");
         while(fread(&del,sizeof(del),1,temp)>0)
        {

        fwrite(&del,sizeof(del),1,fp);
        }
        fclose(fp);
        fclose(temp);
        remove("temp.b");
        fclose(fp);
    }
//UPADATE RECORD:
void updat()
{
    FILE *fp,*temp;
    BOOK update;
    char date[12],bok[25];
    int res,f=0,r,q,i=1;
    fp=fopen("record.b","r");
    temp=fopen("temp.b","ab");
    printf("ENTER ROECORD DATE THAT YOU WANT TO UPDATE:");
    scanf("%s",&date);
    while(fread(&update,sizeof(update),1,fp)>0){
        res=strcmp(update.date,date);
        if(res==0){
       f=1;
    printf("\n\tENTER TODAY'S DATE::");
    fflush(stdin);
    gets(update.date);
    printf("\n\tENTER CUSTOMER NAME ::");
    fflush(stdin);
    gets(update.name);
    printf("\n\tENTER MOBILE NUMBER ::");
    fflush(stdin);
    gets(update.mb);
    printf("\n\tENTER BOOK  NAME    ::");
    fflush(stdin);
    gets(update.book);
    printf("\n\tENTER BOOK PRICE    ::");
    fflush(stdin);
    scanf("%d",&update.price);
    fwrite(&update,sizeof(update),1,temp);
    printf("\nRECORD UPDATED:");
        }
      else{
        fwrite(&update,sizeof(update),1,temp);
        }
    }
        if(f==0){
        loading();
        printf("\n\n\t\tRECORD NOT FOUND!!!");
        }
        fclose(fp);
        fclose(temp);

        fp=fopen("record.b","w");
        fclose(fp);

        fp=fopen("record.b","ab");
        temp=fopen("temp.b","r");
         while(fread(&update,sizeof(update),1,temp)>0)
        {
        fwrite(&update,sizeof(update),1,fp);
        }
        fclose(fp);
        fclose(temp);
        remove("temp.b");
        fclose(fp);
    }
//WRITE FUNCTION TO WRITE DATA IN A FILE:
void write()
{
    BOOK writ;
    FILE *fp;
    fp=fopen("record.b","ab");
    printf("\n\n\n\t\tPLEASE ENTER THE FOLLOWING INFORMATION:\n\n\n");
    printf("\n\tENTER TODAY'S DATE  ::");
    fflush(stdin);
    gets(writ.date);
    printf("\n\tENTER CUSTOMER NAME ::");
    fflush(stdin);
    gets(writ.name);
    printf("\n\tENTER MOBILE NUMBER ::");
    fflush(stdin);
    gets(writ.mb);
    printf("\n\tENTER BOOK  NAME    ::");
    fflush(stdin);
    gets(writ.book);
    printf("\n\tENTER BOOK PRICE    ::");
    fflush(stdin);
    scanf("%d",&writ.price);
    fwrite(&writ,sizeof(writ),1,fp);
    loading();
    printf("\n\n\n\tRECORD IS WRITTEN SUCCESSFULLY!!!\n\tTHANKS!\n");
    fclose(fp);
}
//DISPLAY FUNCTION TO DISPLAY DATA OF CERTAIN DATE:
void display(char da[])
{
    BOOK dis;
    int cmp,i=1,j=0;
    FILE *fp;
    fp=fopen("record.b","rb");
    loading();
    while(fread(&dis,sizeof(dis),1,fp)>0){
    cmp=strcmp(dis.date,da);
    if(cmp==0)
   {
        j=1;
        strupr(dis.name);
        strupr(dis.book);
        printf("\nRecord No::%d\n",i);
        printf("\n\tENTRY  DATE  ::%s",dis.date);
        printf("\n\tCUSTOMER NAME::%s",dis.name);
        printf("\n\tMOBILE NUMBER::%s",dis.mb);
        printf("\n\tBOOK  NAME   ::%s",dis.book);
        printf("\n\tBOOK  PRICE  ::%dRS\n",dis.price);
        i++;
    }
}
    if(j==0)
    printf("\n\n\tSORRY!\n\tTHERE IS NO RECORD OF GIVEN DATE");
   fclose(fp);
}
//DISPLAY FUNCTION TO DISPLAY ALL RECORD OF BOOKS WRITTEN IN A FILE:
void alldisplay()
{
    BOOK dsl;
    int cmp,i=1,f=0;
    FILE *fp;
    fp=fopen("record.b","rb");
     loading();
    while(fread(&dsl,sizeof(dsl),1,fp)>0){
            f=1;
        strupr(dsl.name);
        strupr(dsl.book);
        printf("\nRecord No::%d\n",i);
        printf("\n\tENTRY  DATE  ::%s",dsl.date);
        printf("\n\tCUSTOMER NAME::%s",dsl.name);
        printf("\n\tMOBILE NUMBER::%s",dsl.mb);
        printf("\n\tBOOK  NAME   ::%s",dsl.book);
        printf("\n\tBOOK  PRICE  ::%dRS\n",dsl.price);
        i++;
    }
    if(f==0)
        printf("\n\n\n\tFILE IS EMPTY!!!");
    fclose(fp);
}
//MAIN FUNCTION:
int main()
{
    int choice;
    char date[12];
        system("color 0b");
        gotoxy(55,27);
    printf("_____________________________________________");
    gotoxy(55,30);
    printf("*********_____WELCOME TO BOOKSHOP____********");
    gotoxy(55,32);
    printf("_____________________________________________\n");
    gotoxy(0,60);
    printf("PRESS ANY KEY TO CONTINUE...");
    getch();
    while(1)
    {
    system("CLS");
    printf("\n\n\n\n\t\t\t_______MAIN MENU_______\n\n\n");
    printf("\t1: TO CREATE ENTRY OF A BOOK IN RECORD:\n\n");
    printf("\t2: TO SEARCH RECORD OF A BOOK IN CERTAIN DATE:\n\n");
    printf("\t3: FOR RECORD OF ALL BOOKS:\n\n");
    printf("\t4: FOR DELETE CERTAIN RECORD:\n\n");
    printf("\t5: FOR UPDATE OF RECORD:\n\n");
    printf("\t6. FOR EXIT OF A PROGRAME:\n\n\n\n");
    printf("\t   ENTER YOUR CHOICE::");
    fflush(stdin);
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("cls");
        system("color 0c");
           write();
           break;
    case 2:
             system("cls");
             system("color 0a");
             printf("\n\n\t\t   RECORD OF BOOKS FOR CERTAIN DATE.   \n\n");
            printf("\n\tENTER DATE FOR BOOK RECORD(D-M-Y)::");
            scanf("%s",date);
           display(date);
           break;
    case 3:
            system("cls");
            system("color 0b");
            printf("\n\n\t\t     RECORD OF ALL BOOKS:              \n\n");
            alldisplay();
            break;
    case 4:
             system("CLS");
             system("color 0a");
             printf("\n\n\n\n\t\t_________DELETION IN A RECORD__________\n\n");
              printf("\n\n\n\t\tENTER DATE OF RECORD THAT YOU WANT TO DELETE:");
              fflush(stdin);
             gets(date);
             delet(date);
            break;
    case 5:
        system("CLS");
         updat();
         break;
    case 6:
        exit(0);
    default:
            printf("\n\tSORRY!!!\n\tINVALID CHOICE!!!");
    }
    getch();
    }
}

