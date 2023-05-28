#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr[3],a,s,d;
	int i;
	ptr[0]=&a;
	ptr[1]=&s;
	ptr[2]=&d;
	printf("Enter three Integers:\n");
	scanf("%d%d%d",&a,&s,&d);
	printf("You entered following values:\n");
	for(i=0;i<3;i++)
	printf("%d\n",*ptr[i]);
	getch();
}
