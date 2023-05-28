//STACK IMPLEMENTION THROUGH ARRAY:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{
    int top;
    int capacity;
    int *array;
}ArrayStack;
ArrayStack* createStack(int cap)
{
    ArrayStack *stack;
    stack=(ArrayStack*)malloc(sizeof(ArrayStack));
    stack->capacity=cap;
    stack->top=-1;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return(stack);
}
int isFull(ArrayStack *stack)
{
  if(stack->top==stack->capacity-1)
        return 1;
  else
    return 0;
}
int isEmpty(ArrayStack *stack)
{
    if(stack->top==-1)
        return 1;
    else
        return 0;
}
void push(ArrayStack *stack,int item)
{
    if(!isFull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
}
int pop(ArrayStack *stack)
{
    int item;
    if(!isEmpty(stack)){
    item=stack->array[stack->top];
    stack->top--;
    return(item);
    }
    return (-1);
}
int main()
{
    int choice,item,cap;
   ArrayStack *stack;
   printf("ENTER CAPACITY VALUE OF STACK:");
   scanf("%d",&cap);
   stack=createStack(cap);
   while(1){
        system("CLS");
    printf("\n\n\n____MAIN MENU____\n\n");
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. EXIT");
    printf("\n\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
           printf("ENTER A NUMBER:");
           scanf("%d",&item);
           push(stack,item);
           break;
    case 2:
        item=pop(stack);
        if(item==-1)
            printf("STACK IS EMPTY!");
        else
        printf("POPED VALUE IS %d:",item);
        break;
    case 3:
        exit(0);
    default:
        printf("INVALID CHOICE!!!");
    }
getch();
   }
   return 0;
}
