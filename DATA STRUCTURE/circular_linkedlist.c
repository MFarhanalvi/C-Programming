#include<stdio.h>
#include<conio.h>
#include <windows.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
node *createList(node *last);
void display(node *last);
node* addtoempty(node *last,int value);
node* addatbeg(node *last,int value);
node* addatend(node *last,int value);
node* addafter(node *last,int value,int item);
node* del(node* last,int value);
int main()
{
  int choice,value,item;
  node *last=NULL;
  while(1)
  {
  	system("CLS");
  	system("color 0c");
  	printf("\n1:CREATE LIST:");
  	printf("\n2:DISPLAY LIST:");
  	printf("\n3:ADD TO EMPTY LIST:");
  	printf("\n4:ADD AT BEGINING:");
  	printf("\n5:ADD AT END:");
  	printf("\n6:ADD AFTER CERTAIN VALUE:");
  	printf("\n7:DELETE:");
  	printf("\n8:EXIT PROGRAME:");
  	printf("\n\n\n\nENTER YOUR CHOICE::");
  	scanf("%d",&choice);
  	switch(choice){
  		case 1:
  		last=createList(last);
  		break;
  		case 2:
  		display(last);
  		break;
  		case 3:
  		printf("\nENTER A NUMBER TO LIST:");
  		scanf("%d",&value);
  		last=addtoempty(last,value);
  		break;
  		case 4:
  		printf("\nENTER A NUMBER FOR LIST:");
  		scanf("%d",&value);
  		last=addatbeg(last,value);
  		break;
  		case 5:
  		printf("\nENTER A NUMBER FOR THE LIST:");
  		scanf("%d",&value);
  		last=addatend(last,value);
  		break;
  		case 6:
  		printf("\nENTER A VALUE AFTER YOU WANT TO INSERT A NUMBER:");
  		scanf("%d",&item);
  		printf("\nENTER A NUMBER YOU WANT TO INSERT:");
  		scanf("%d",&value);
  		last=addafter(last,value,item);
  		break;
  		case 7:
  		printf("\nENTER VALUE YOU WANT TO DELETE:");
  		scanf("%d",&value);
  		last=del(last,value);
  		break;
  		case 8:
  		exit(0);
  		default:
  		printf("\nINVALID CHOICE!!!");
}
getch();
  }
}
node *createList(node *last)
{
	int n,value,i;
	printf("\nHOW MANY VALUES YOU WANT TO ENTER:");
	scanf("%d",&n);
	printf("\nENTER FIRST DATA FOR THE LIST:");
	scanf("%d",&value);
	last=addtoempty(last,value);
	for(i=2;i<=n;i++)
	{
		printf("\nENTER DATA FOR THE LIST:");
		scanf("%d",&value);
		last=addatend(last,value);
	}
	return(last);
}
void display(node *last)
{
	node *t;
	if(last==NULL)
		printf("\nLIST IS EMPTY!!!");
	else
	{
	t=last->next;
    do{
	printf("%d ",t->data);
    t=t->next;
	}while(t!=last->next);
}

}
node* addtoempty(node *last,int value)
{
	node *n;
	n=(node *)malloc(sizeof(node));
	n->data=value;
	last=n;
	last->next=last;
	return(last);
}

node* addatbeg(node *last,int value)
{
	node *n;
	n=(node *)malloc(sizeof(node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	return(last);
}
node* addatend(node *last,int value)
{
	node *n;
	n=(node *)malloc(sizeof(node));
	n->data=value;
	n->next=last->next;
	last->next=n;
	last=n;
	return(last);
}
node* addafter(node *last,int value,int item)
{
	node *t,*n;
	t=last->next;
	do
	{
		if(t->data==item)
		{
			n=(node *)malloc(sizeof(node));
			n->data=value;
			n->next=t->next;
			t->next=n;
			if(t==last)
				last=n;
			return(last);
		}
		t=t->next;
	} while (t!=last->next);
    printf("\n%d NOT FOUND",item);
    return(last);
}
node* del(node* last,int value)
{
	node *t,*p;
	if (last==NULL)
	{
		 printf("LIST IS EMPTY!!!");
		 return(last);
	}
	if(last==last->next && last->data==value)
	{
		t=last;
		last=NULL;
		free(t);
		return(last);
	}
	if(last->next->data==value)
	{
		t=last->next;
		last->next=t->next;
		free(t);
		return(last);
	}
	p=last->next;
	while(p->next!=last)
	{
		if(p->next->data==value){
			t=p->next;
			p->next=t->next;
			free(t);
			return(last);
		}
		p=p->next;
	}
	if(last->data==value)
	{
		t=last;
		p->next=last->next;
		last=p;
		free(t);
		return(last);
	}
    printf("\nNOT FOUND!!!");
	return(last);
}

