#include<conio.h>
#include<stdio.h>
int sum(int a);
void main()
{
	  int x,y;
	  printf("sum of 1st n natural number\n");
	  printf("Enter number=");
	  scanf("%d",&y);
      x=sum(y);
      printf("Answer=%d",x);
      getch();
  }
      int sum(int a)
      {
      	int s;
      	if(a==1)
      	return(a);
      	s=a+sum(a-1);
      	return(s);
	  }

