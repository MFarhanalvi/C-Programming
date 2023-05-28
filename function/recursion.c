#include<conio.h>
#include<stdio.h>
#include<windows.h>
int sum(int a);
int main()
{
    system("color 0b");
	  int x,y;
	  printf("\n\n\tSum of n natural numbers\n");
	  printf("\tEnter number=");
	  scanf("%d",&y);
      x=sum(y);
      printf("\tAnswer=%d",x);
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

