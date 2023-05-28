#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
typedef struct node
{
    struct node *prev;
    int info;
    struct node *next;
}node;
void insertStart(node **s,int data);
void insertLast(node **s,int data);
void insertAfter(node **s,node *ptr,int data);
node* find(node **s,int data);
void deleteFirst(node **s);
int deleteLast(node **s);
int  deleteIntermediate(node **s,node *ptr);
void viewlist(node **s);
void getfirst(node **s);
void getlast(node **s);
void search(node **s,int data);
int menu()
{
    int choice;
    system("CLS");
      printf("\n\n\n_______MAIN MENU______\n\n\n");
  printf("\n1.INSERTION IN A LIST:");
  printf("\n2.DELETION IN A LIST:");
  printf("\n3.SEARCH IN A  LIST:");
  printf("\n4.VIEW LIST:");
  printf("\n5.GET FIRST VALUE:");
  printf("\n6.GET LAST VALUE:");
  printf("\n7.EXIT PROGRAME:");
  printf("\n\nENTER YOUR CHOICE:");
  scanf("%d",&choice);
    return(choice);
}
int main()
{
  node *ptr;
  node *start=NULL;
  int data,ch;
  while(1){
  switch(menu())
  {
  case 1:
      {
          while(1){
      system("CLS");
    printf("\n\n INSERTION IN A LIST\n\n");
    printf("\n1. INSERT VALUE AS A FIRST:");
    printf("\n2. INSERT VALUE AS A LAST:");
    printf("\n3. INSERT VALUE AFTER A PARTICLUR VALUE:");
    printf("\n4. VIEW LIST:");
    printf("\n5. BACK TO MAIN MENU:");
    printf("\n\n  ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf(" ENTER A VALUE:");
        scanf("%d",&data);
        insertStart(&start,data);
        break;
    case 2:
        printf("ENTER A VALUE:");
        scanf("%d",&data);
        insertLast(&start,data);
        break;
    case 3:
        printf("ENTER A VALUE AFTER YOU WANT TO INSERT:");
        scanf("%d",&data);
        ptr=find(&start,data);
        printf("\nENTER VALUE YOU WANT TO INSERT:");
        scanf("%d",&data);
        insertAfter(&start,ptr,data);
        break;
    case 4:
        viewlist(&start);
        getch();
        break;
    case 5:
        system("CLS");
        menu();
        break;
    break;
    default:
        printf("INVALID CHOICE!!!");
    }
    if(ch==5)
        break;
    }
    break;
    }
       case 2:
        {
            while(1){
      system("CLS");
    printf("\n\n DELETION IN A LIST\n\n");
    printf("\n1. DELETE FIRST VALUE:");
    printf("\n2. DELETE LAST VALUE :");
    printf("\n3. DELETE A PARTICLUAR VALUE:");
    printf("\n4. VIEW LIST:");
    printf("\n5. BACK TO MAIN MENU:");
    printf("\n ENTER YOUR CHOICE:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        deleteFirst(&start);
        getch();
        break;
    case 2:
        deleteLast(&start);
        getch();
        break;
    case 3:
        printf("\nENTER A VALUE YOU WANT TO DELETE:");
        scanf("%d",&data);
        deleteIntermediate(&start,find(&start,data));
        break;
    case 4:
        viewlist(&start);
        getch();
        break;
    case 5:
        system("CLS");
        menu();
        break;
    default:
        printf("INVALID CHOICE!!!");
    }
      if(ch==5)
     break;
}
    break;
    }
    case 3:
        {
            system("CLS");
            printf("\n\n\n____SEARCHING_ENGINE____\n\n\n");
            printf("ENTER A VALUE YOU WANT TO SEARCH:");
            scanf("%d",&data);
            search(&start,data);
            getch();
            break;
        }

    case 4:
        {
            viewlist(&start);
            getch();
            break;
        }
    case 5:
           getfirst(&start);
           getch();
            break;
    case 6:
        getlast(&start);
        getch();
        break;
    case 7:
        exit(0);
    default:{
        printf("INVALID CHOICE!");
      getch();
      }
}
  }
getch();
}
void search(node **s,int data){
     node *t;
    if(*s==NULL){
        printf("LIST IS EMPTY!");

    }
    else{
        t=*s;
        while(t!=NULL){
            if(t->info==data){
                printf("%d ",t->info);
                }
               t=t->next;
        }
    }
}
void getlast(node **s)
{
    node *t;
    if(*s==NULL)
        printf("LIST IS EMPTY:");
    else{
        t=*s;
        while(t->next!=NULL)
            t=t->next;
            printf("%d",(t->info));
    }

}
void getfirst(node **s)
{
    if(*s==NULL){
        printf("LIST IS EMPTY:");
    }
    else{
        printf("%d",((*s)->info));
    }
}
void viewlist(node **s)
{
    node *t;
    if(*s==NULL)
        printf("LIST IS EMPTY:");
    else{
        t=*s;
        while(t!=NULL){
            printf("%d ",t->info);
           t=t->next;
        }
    }
}
int deleteIntermediate(node **s,node *ptr)
{
    if(*s==NULL)
        printf("\n\tLIST IS EMPTY");
        return 0;
    if(ptr->prev==NULL){
        *s=ptr->next;
        free(ptr);
        return 1;
    }
    if(ptr->next=NULL){
        ptr->prev->next=ptr->next;
        free(ptr);
        return 1;
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    free(ptr);
    return 1;
}
int deleteLast(node **s)
{
    node *t;
    if(*s==NULL){
        printf("LIST IS EMPTY!");
        return 0;}
    t=*s;
    while(t->next!=NULL)
        t=t->next;
    if((*s)->next==NULL)
        *s=NULL;
    else
        t->prev->next=NULL;
    free(t);
    printf("\nDELETED");
    return 1;
}
void deleteFirst(node **s)
{
  node *t;
  if(*s==NULL)
    printf("LIST IS EMPTY:");
  else{
    t=*s;
    *s=(*s)->next;
    t->prev=NULL;
    free(t);
    printf("\nDELETED");
  }
}
node* find(node **s,int data)
{
    node *t;
    if(*s==NULL){
        printf("LIST IS EMPTY!");
        return(NULL);
    }
    else{
        t=*s;
        while(t!=NULL){
            if(t->info==data)
                return(t);
            t=t->next;
        }
        return(NULL);
    }
}
void insertAfter(node **s,node *ptr,int data)
{
    node *p;
    if(ptr==NULL)
        printf("INVALID INSERTION");
        else{
            p=(node*)malloc(sizeof(node));
            p->info=data;
            p->prev=ptr;
           p->next=ptr->next;
           if(ptr->next!=NULL)
            ptr->next->prev=p;
           ptr->next=p;
        }
}
void insertStart(node **s,int data)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->info=data;
    p->prev=NULL;
     p->next=*s;
    *s=p;
}
void insertLast(node **s,int data)
{
    node *p,*t;
    p=(node*)malloc(sizeof(node));
    p->info=data;
    p->next=NULL;
    if(*s==NULL){
      p->prev=NULL;
      *s=p;
    }
    else{
        t=*s;
      while(t->next!=NULL)
        t=t->next;
        p->prev=t;
        t->next=p;
    }
}
