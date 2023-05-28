 #include<stdio.h>
 #include<conio.h>
 #include<windows.h>
typedef struct node
{
    int info;
    struct node *link;
}node;
 node *start=NULL;
void insertafter(node *ptr,int data)
 {
       node *p;
    if(ptr==NULL)
        printf("INVALID INSERTION");
        else{
            p=(node*)malloc(sizeof(node));
            p->info=data;
           p->link=ptr->link;
           if(ptr->link!=NULL)
            ptr->link=p;
           
        }
 }
 void insertNode()
 {
     node *n,*t;
     n=(node *)malloc(sizeof(node));
     printf("Enter a number:");
     scanf("%d",&n->info);
     n->link=start;
     start=n;
 }
void insertLast()
{
    node *p,*t;
    p=(node*)malloc(sizeof(node));
    printf("ENTER A NUMBER:");
    scanf("%d",&p->info);
    p->link=NULL;
    if(start==NULL){
      start=p;
    }
    else{
        t=start;
      while(t->link!=NULL)
        t=t->link;
        t->link=p;
    }
}
node* find(node *ptr,int data)
{
    node *t;
    if(start==NULL){
        printf("LIST IS EMPTY!");
        return(NULL);
    }
    else{
        t=start;
        while(t!=NULL){
            if(t->info==data)
                return(t);
            t=t->link;
        }
        return(NULL);
    }
}
void search(int data)
{
	int f=0;
     node *t;
    if(start==NULL){
    	f=1;
        printf("LIST IS EMPTY!\n");}
    else{
        t=start;
        while(t!=NULL){
            if(t->info==data){
            	f=1;
                printf("%d",t->info);
                  break;}
               t=t->link;
        }
    }
             if(f==0)
         printf("NOT FOUND!!!");
}
 void deleteNode()
 {
     node *r;
     if(start==NULL)
     printf("LIST IS EMPTY!!!");
     else
     {
         r=start;
         start=start->link;
         free(r);
     }

 }
 int deletelast()
 {
 	    node *t;
    if(start==NULL){
        printf("LIST IS EMPTY!");
        return 0;}
    t=start;
    while(t->link!=NULL)
        t=t->link;
    if((start)->link==NULL)
        start=NULL;
    else
        t->link=NULL;
    free(t);
    printf("\nDELETED");
    return 1;
 }
  void viewlist()
 {
     node *t;
     if(start==NULL)
        printf("LIST IS EMPTY!!!");
     else
     {
        t=start;
        while(t!=NULL){
            printf("%d ",t->info);
            t=t->link;
        }
     }
 }
 int main()
 {
     system("color 0b");
    node *ptr;
   int ch,data;
    while(1)
    {
    system("CLS");
   printf("\n 1.INSERT IN A LIST:");
   printf("\n 2.DELETTION IN A LIST");
   printf("\n 3.VIEW LIST");
   printf("\n 4ENTER VALUE YOU WANT TO DELETE.");
   printf("\n 5.SEARCH");
   printf("\n 6.EXIT");
   printf("\n\nEnter your choice::");
   scanf("%d",&ch);
       switch(ch)
       {
       case 1:
           insertNode();
           break;
       case 2:
           deleteNode();
           break;
       case 3:
           viewlist();
           break;
       case 4:
          deletelast();
           break;
       case 5:
           printf("ENTER NUMBER THAT YOU WANT TO SEARCH:");
           scanf("%d",&data);
           search(data);
            break;
      case 6:
        exit(0);
    default:
        printf("Invalid choice!!!");
       }
     getch();
     }
 }
