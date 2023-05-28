#include<stdio.h>
#include<conio.h>
void exchange(int *m,int *n);
void main()
{
	int n1,n2;
	printf("Enter two Integers:\n");
	scanf("%d %d",&n1,&n2);
	printf("Values before swapping:\n");
	printf("a=%d\nb=%d\n",n1,n2);
	exchange(&n1,&n2);
	printf("Values after swapping:\n");
	printf("a=%d",n1);
	printf("\nb=%d",n2);
	getch();
}
 void exchange(int *m,int *n)
{
	int s;
	s=*m;
	*m=*n;
	*n=s;
}
