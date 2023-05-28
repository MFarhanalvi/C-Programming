 //PROGRAME OF LINKED LIST TO STORE STUDENT RECORD:
 #include<stdio.h>
 #include<conio.h>
 #include<windows.h>
 #define FLUSH fflush(stdin)
typedef struct node
{
    char info[20],father[20];
    char rollno[10];
    char mb[15];
    char dep[20];
    struct node *link;
}node;
 node *start=NULL;
 //FUNCTION TO CREATE A BLOCK FOR STUDENT RECORD:
 node* createNode()
 {
    node *n;
    n=(node *)malloc(sizeof(node));
    return(n);
 }
 //FUNCTION TO INSERT DATA:
 void insertNode()
 {
     node *temp,*t;
     temp=createNode();
     printf("\n\t\tENTER STUDENT NAME:");
     FLUSH;
     gets(temp->info);
     FLUSH;
     printf("\n\t\tENTER FATHER NAME:");
     gets(temp->father);
     FLUSH;
     printf("\n\t\tENTER ROLL NO:");
     gets(temp->rollno);
     printf("\n\t\tENTER YOUR MOBILE NUMBER:");
     FLUSH;
     gets(temp->mb);
     printf("\n\t\tENTER YOUR DEPARTMENT:");
     FLUSH;
     gets(temp->dep);
     temp->link=NULL;
     if(start==NULL)
        start=temp;
     else
     {
         t=start;
         while(t->link!=NULL)
            t=t->link;
         t->link=temp;
     }
 }
 //FUNCTION TO DELETE DATA:
 void deleteNode()
 {
     node *r;
     if(start==NULL)
     printf("\n\tLIST IS EMPTY!!!");
     else
     {
         r=start;
         start=start->link;
         free(r);
          printf("\n\n\t\tRECORD IS DELETED SUCCESSFULLY...");
     }

 }
 //FUNCTION TO VIEW ALL RECORD:
 void viewlist()
 {
     int i=1;
     node *t;
     if(start==NULL)
        printf("\n\tLIST IS EMPTY!!!");
     else
     {
        t=start;
        while(t!=NULL){
             strupr(t->info);
            strupr(t->father);
            strupr(t->dep);
            printf("\n\t\tRECORD %d:\n",i);
            printf("\n\t\tSTUDENT NAME:%s",t->info);
            printf("\n\t\tFATHER NAME :%s",t->father);
            printf("\n\t\tROLL NO :%s",t->rollno);
            printf("\n\t\tDEPARTMENT :%s",t->dep);
            printf("\n\t\tMOBILE NUMBER :%s\n",t->mb);
            i++;
            t=t->link;
        }
     }
 }
 //MAIN FUNCTION:
 int main()
 {
     system("color 0b");
   int ch;
    while(1)
    {
          system("cls");
        printf("\n\n\n\t\t\t\t\t___________________________SCHOOL MANAGMENT SYSTEM______________________\n");
    printf("\n\n\t______MAIN MENU______\n\n");
   printf("\n 1.FOR ADD RECORD TO THE LIST.");
   printf("\n 2.FOR DELETE FIRST RECORD.");
   printf("\n 3.FOR VIEW RECORD LIST.");
   printf("\n 4.FOR EXIT OF A PROGRAME.");
   printf("\n\n ENTER YOUR CHOICE::");
   scanf("%d",&ch);
       switch(ch)
       {
       case 1:
           system("CLS");
           system("color 0a");
           printf("\n\n\n\n\t\t\tPLEASE ENTER FOLLOWING INFORMATION:\n\n\n");
           insertNode();
           printf("\n\n\t\tRECORD IS WRITTEN SUCCESSUFULLY!!!\n\tTHANKS...");
           break;
       case 2:
           system("color 09");
           FLUSH;
           deleteNode();
           break;
       case 3:
           system("CLS");
           system("color 0c");
           printf("\n\n\n\n\t\t\tALL RECORD OF STUDENT:\n\n\n");
           viewlist();
           FLUSH;
            break;
       case 4:
           exit(0);
    default:
        printf("\n\tSORRY!!!\n\tInvalid choice!!!");

       }
       getch();
     }

 }
