//implementation of queue by array:
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct
{
	int front,rear;
	int capacity;
	int *array;
}ArrayQueue;
ArrayQueue* createQueue(int capacity)
{
	ArrayQueue *Q;
	Q=(ArrayQueue *)malloc(sizeof(ArrayQueue));
	if(!Q)
	return(NULL);
	Q->capacity=capacity;
	Q->front=Q->rear=-1;
	Q->array=malloc(Q->capacity*sizeof(int));
	if(!Q->array)
		return(NULL);
	    return(Q);
}
int isEmptyQueue(ArrayQueue *Q)
{
	return(Q->front==-1);
}
int isfullQueue(ArrayQueue *Q)
{
	return((Q->rear+1)%Q->capacity==Q->front);
}
int QueueSize(ArrayQueue *Q)
{
	return((Q->capacity-Q->front+Q->rear+1)%Q->capacity);
}
void enQueue(ArrayQueue *Q,int data)
{
	if(isfullQueue(Q))
		printf("OVERFLOW!\n");
	else
	{
		Q->rear=(Q->rear+1)%Q->capacity;
		Q->array[Q->rear]=data;
		if(Q->front==-1)
			Q->front=Q->rear;
	}
}
void deQueue(ArrayQueue *Q)
{
	int data=-1;
	if(isEmptyQueue(Q)){
		printf("QUEUE IS EMPTY!");
	}
	else
	{
		data=Q->array[Q->front];
		if(Q->front==Q->rear)
			Q->front=Q->rear=-1;
		else
			Q->front=(Q->front+1)%Q->capacity;

	}
	printf("\nDELETED:");
}
void deleteQueue(ArrayQueue *Q)
{
	if(Q)
	{
		if(Q->array)
        free(Q->array);

    }
   free(Q);
   printf("FORMAT:");
   }
 void viewQueue(ArrayQueue *Q)
 {
 	if(isEmptyQueue)
 		printf("\nQUEUE IS EMPTY:");
 	while(Q->array!=NULL)
 	{
 		printf(" %d",Q->array[Q->rear]);
 		Q->rear+1;
 	}
 }
int menu()
{
	int ch;
	printf("\n1:INSERTION IN A QUEUE:");
	printf("\n2:DELETION IN A QUEUE:");
	printf("\n3:view Queue:");
	printf("\n4:EXIT PROGRAME:");
	printf("\n\n\n ETNTER YOUR CHOICE:");
	scanf("%d",&ch);
	return (ch);
}
int main()
{
	int a;
	ArrayQueue Q;
	while(1){
	system("cls");
   switch(menu())
   {
   	case 1:
   	printf("\nEnter a number:");
   	scanf("%d",&a);
   	enQueue(createQueue(4),a);
   	break;
   	case 2:
   	deQueue(&Q);
   	break;
    case 3:
    viewQueue(&Q);
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("INVALID CHOICE\n");
   }
    getch();
}
	return 0;
}
