//STACK IMPLEMENTATION USING LINKED LIST:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{
    int info;
    struct node *next;
}node;
void remove_stack(node **s)
{
   while(*s!=NULL){
    pop(*s);
    }

}
int pop(node **s){
    int item;
    node *r;
   if(*s==NULL){
    printf("STACK UNDERFLOW!");
    return;
   }
   else{
        item=(*s)->info;
        r=*s;
        *s=r->next;
        free(r);
        return (item);
   }

}
void peek(node **s)
{
    if(*s==NULL)
        printf("STACK IS EMPTY!");
    else
        printf("%d",((*s)->info));

}
node * create_node()
{
    node *n;
    n=(node *)malloc(sizeof(node));
    return n;
}
void push(node **s,int item)
{
     node *n;
    n=create_node();
    if(n!=NULL){
    n->info=item;
    n->next=(*s);
    *s=n;
    }
}
int menu()
{
    int choice;
    printf("\n\n\n______MAIN MENU______\n\n\n");
    printf("\n1. PUSH IN STACK");
    printf("\n2. POP IN STACK");
    printf("\n3. PEEK VALUE IN STACK");
    printf("\n4. FORMAT STACK");
    printf("\n5. EXIT PROGRAME");
    printf("\n\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    return(choice);
}
int main()
{
   node *stack;
  int data;
  while(1){
        system("CLS");
    switch(menu()){
    case 1:
        printf("\nENTER A NUMBER:");
        scanf("%d",&data);
        push(&stack,data);
        break;
    case 2:
        pop(&stack);
        break;
    case 3:
        peek(&stack);
        break;
    case 4:
        remove_stack(&stack);
        break;
    case 5:
        exit(0);
    default:
        printf("INVALID CHOICE!!!");
    }
  getch();
  }

}
