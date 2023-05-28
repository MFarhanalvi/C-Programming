//PROGRAME FOR BOOKSHOP MANAGMENT:
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#define FLUSH fflush(stdin)
 void gotoxy(int x,int y )
  {
 	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
  }
//UPADATE RECORD:
typedef struct
{
    char name[25];
    char father[25];
    char mb[15];
    char adress[40];
    char rollno[10];
    char dateofbirth[15];
}urecord;
void update()
{
    FILE *fp,*temp;
    urecord u;
    char rolno[10];
    int res,f=0;
    fp=fopen("student.b","r");
    temp=fopen("temp.b","ab");
    printf("ENTER STUDENT ROLL NO:");
    FLUSH;
    gets(rolno);
    while(fread(&u,sizeof(u),1,fp)>0){
        res=strcmp(u.rollno,rolno);
        if(res==0){
       f=1;
    printf("\n\tENTER ROLL NO OF A STUDENT ::");
    FLUSH;
    gets(u.rollno);
    printf("\n\tENTE NAME OF A STUDENT     ::");
    FLUSH;
    gets(u.name);
    printf("\n\tENTER FATHER NAME OF A STUDENT ::");
    FLUSH;
    gets(u.father);
    printf("\n\tENTER MOBILE NOUMBER  ::");
    FLUSH;
    gets(u.mb);
    printf("\n\tENTER PERMANANTLY HOME ADRESS OF A STUDENT  ::");
    FLUSH;
    gets(u.adress);
    printf("\n\tENTER DATE OF BIRTH OF A STUDENT   ::");
    FLUSH;
    gets(u.dateofbirth);
    fwrite(&u,sizeof(u),1,temp);
    printf("\n\tRECORD UPDATED:");
        }
      else{
        fwrite(&u,sizeof(u),1,temp);
        }
    }
        if(f==0){
        printf("\n\n\t\tRECORD NOT FOUND!!!");
        }
        fclose(fp);
        fclose(temp);

        fp=fopen("student.b","w");
        fclose(fp);

        fp=fopen("student.b","ab");
        temp=fopen("temp.b","r");
         while(fread(&u,sizeof(u),1,temp)>0)
        {
        fwrite(&u,sizeof(u),1,fp);
        }
        fclose(fp);
        fclose(temp);
        remove("temp.b");
        fclose(fp);
    }
typedef struct
{
    char name[25];
    char father[25];
    char mb[15];
    char adress[40];
    char rollno[10];
    char dateofbirth[15];
}drecord;
//DELETE FUNCTION:
void delet(char rolno[])
{
    FILE *fp,*temp;
    drecord d;
    int res,f=0,r,q;
    fp=fopen("student.b","r");
    temp=fopen("temp.b","ab");

    while(fread(&d,sizeof(d),1,fp)>0){
        res=strcmp(d.rollno,rolno);
        if(res==0){
            f=1;
            printf("\n\n\n\t\tRECORD DELETED...\n\n\t\t");
             for(r=1;r<=30;r++){
        for(q=0;q<=1000000;q++);
        printf("%c",219);}
        }
        else{
        fwrite(&d,sizeof(d),1,temp);
        }
    }
        if(f==0){
        printf("\n\n\t\tRECORD NOT FOUND!!!");
        }
        fclose(fp);
        fclose(temp);

        fp=fopen("student.b","w");
        fclose(fp);

        fp=fopen("student.b","ab");
        temp=fopen("temp.b","r");
         while(fread(&d,sizeof(d),1,temp)>0)
        {

        fwrite(&d,sizeof(d),1,fp);
        }
        fclose(fp);
        fclose(temp);
        remove("temp.b");
        fclose(fp);
    }
typedef struct
{
    char name[25];
    char father[25];
    char mb[15];
    char adress[40];
    char rollno[10];
    char dateofbirth[15];
}student;
//WRITE FUNCTION TO WRITE DATA IN A FILE:
void write()
{
    student s;
    FILE *fp;
    fp=fopen("student.b","ab");
    printf("\n\n\t\tPLEASE ENTER THE FOLLOWING INFORMATION:\n\n");
    printf("\n\tENTER ROLL NO OF A STUDENT ::");
    FLUSH;
    gets(s.rollno);
    printf("\n\tENTE NAME OF A STUDENT     ::");
    FLUSH;
    gets(s.name);
    printf("\n\tENTER FATHER NAME OF A STUDENT ::");
    FLUSH;
    gets(s.father);
    printf("\n\tENTER MOBILE NOUMBER  ::");
    FLUSH;
    gets(s.mb);
    printf("\n\tENTER PERMANANTLY HOME ADRESS OF A STUDENT  ::");
    FLUSH;
    gets(s.adress);
    printf("\n\tENTER DATE OF BIRTH OF A STUDENT   ::");
    FLUSH;
    gets(s.dateofbirth);
    fwrite(&s,sizeof(s),1,fp);
    printf("\n\tRECORD IS WRITTEN SUCCESSFULLY!!!\n\tTHANKS!\n");
    fclose(fp);
}
typedef struct
{
    char name[25];
    char father[25];
    char mb[15];
    char adress[40];
    char rollno[10];
    char dateofbirth[15];
}dstudent;
//DISPLAY FUNCTION TO DISPLAY DATA OF CERTAIN ROLL NO:
void display(char rolno[])
{
    dstudent d;
    int cmp,i=1,j=0;
    FILE *fp;
    fp=fopen("student.b","rb");
    while(fread(&d,sizeof(d),1,fp)>0){
    cmp=strcmp(d.rollno,rolno);
    if(cmp==0)
    {
        j=1;
        strupr(d.name);
        strupr(d.father);
        strupr(d.adress);
        printf("\nRecord No::%d\n",i);
        printf("\n\t ROLL NO      ::%s",d.rollno);
        printf("\n\t STUDENT NAME ::%s",d.name);
        printf("\n\tFATHER  NAME  ::%s",d.father);
        printf("\n\tMOBILE NUMBER ::%s",d.mb);
        printf("\n\tPERMANANTLY HOME ADRESS  ::%s",d.adress);
        printf("\n\tDATE OF BIRTH ::%s",d.dateofbirth);
        i++;
    }
}
   if(j==0)
    printf("\n\tSORRY!\n\tTHERE IS NO RECORD OF GIVEN ROLL NO:");
   fclose(fp);
}
typedef struct{
    char name[25];
    char father[25];
    char mb[15];
    char adress[40];
    char rollno[10];
    char dateofbirth[15];
}adstudent;
//DISPLAY FUNCTION TO DISPLAY ALL RECORD OF STUDENTS WRITTEN IN A FILE:
void alldisplay(){
    system("color 0c");
    adstudent d;
    int i=1,f=0;
    FILE *fp;
    fp=fopen("student.b","r");
    while(fread(&d,sizeof(d),1,fp)>0){
            f=1;
        strupr(d.name);
        strupr(d.father);
        strupr(d.adress);
        printf("\nRecord No::%d\n",i);
        printf("\n\t ROLL NO      ::%s",d.rollno);
        printf("\n\t STUDENT NAME ::%s",d.name);
        printf("\n\tFATHER  NAME  ::%s",d.father);
        printf("\n\tMOBILE NUMBER ::%s",d.mb);
        printf("\n\tPERMANANTLY ADRESS OF HOME  ::%s",d.adress);
        printf("\n\tDATE OF BIRTH ::%s",d.dateofbirth);
        i++;
    }
    if(f==0)
        printf("\n\tFILE IS EMPTY!!!");
    fclose(fp);
}
//MAIN FUNCTION:
int main()
{
    system("color 0b");
    char choice;
    char ch,rolno[10];
    system("color 0b");
    gotoxy(55,13);
    printf("______________________________________ ");
    gotoxy(55,14);
    printf("______________________________________ ");
    gotoxy(55,16);
    printf(" SCHOOL MANAGMENT SYSTEM FOR STUDENTS ");
    gotoxy(55,17);
    printf("______________________________________ ");
    gotoxy(55,18);
    printf("______________________________________ ");
    gotoxy(0,60);
    printf("PRESS ANY KEY TO CONTINUE...");
    getch();
    while(1)
    {
        system("cls");
    printf("\n\n\n\n\t\t _________MAIN MENU____________      \n\n\n\n");
    printf("\t1: TO CREATE ENTRY OF A STUDENT IN RECORD   :\n\n");
    printf("\t2: TO SEARCH RECORD OF A STUDENT BY ROLL NO:\n\n");
    printf("\t3: TO DELETE RECORD OF A STUDENT BY ROLL NO:\n\n");
    printf("\t4: TO UPDATE RECORD OF A STUDENT BY ROLL NO:\n\n");
    printf("\t5: FOR RECORD OF ALL STUDENT IN A SCHOOL    :\n\n");
    printf("\t6. FOR EXIT OF A PROGRAME:\n\n\n");
    printf("\tENTER YOUR CHOICE::");
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
             system("color 0d");
             printf("\n\n\t\t   RECORD OF STUDENT  FOR CERTAIN ROLL NO:   \n\n");
            printf("\n\t        ENTER ROLL NO OF A STUDENT::");
            FLUSH;
            gets(rolno);
           display(rolno);
           break;
    case 3:
        system("CLS");
        printf("\n\n\n\n\t________DELETION OF RECORD_________\n\n\n");
        printf("\tENTER ROLL NO:");
        FLUSH;
        gets(rolno);
        delet(rolno);
        break;
    case 4:
        system("CLS");
        printf("\n\n\n\n\t======UPDAETE_RECORD======\n\n\n");
          update();
          break;
    case 5:
            system("CLS");
            system("color 0e");
            printf("\n\n\t\t     RECORD OF ALL STUDENT:              \n\n");
            alldisplay();
            break;
    case 6:
            exit(0);
    default:
                printf("\n\tINVALID CHOICE!!!");
    }
     getch();
    }
}

