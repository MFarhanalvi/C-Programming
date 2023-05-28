#include<conio.h>
#include<stdio.h>
void add();
void Even();
void main()
{
	int a,b=1;
	printf("1.For Addition.\n");
	printf("2.For Even &Odd.\n\n");
	for (b=1;b<=3;b++)
	{
	printf("Enter your choice=");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
	       add();
	       break;
	case 2:
	       Even();
	       break;
    default:
	        printf("Invalid Choice!\n Sorry!\n");
	    }
	}
	getch();
}
 void add()
  {
  	int a,s,d;
  	printf("Enter two number=\n");
  	scanf("%d%d",&a,&s);
  	d=a+s;
  	printf("Answer=%d\n",d);
  }
  void Even()
  {
  	int  a;
  	printf("Enter a number=");
  	scanf("%d",&a);
  	 a%2==0?printf("Even\n"):printf("Odd\n");
  }
