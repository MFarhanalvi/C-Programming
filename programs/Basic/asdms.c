#include<conio.h>
#include<stdio.h>
int main()
{
	int a,s,d,i=0;
    printf("1.For Addition.\n");
	printf("2.For Subtraction.\n");
	printf("3.For Multiplication.\n");
	printf("4.For Division.\n");
	printf("5.For Square.\n\n");
	for(i=1;i<=5;i++)
	{
	printf("Enter your Choice!=");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
				printf("Enter two numbers\n");
				scanf("%d%d",&s,&d);
				a=s+d;
				printf("Answer =%d\n",a);
				break;
		case 2:
				printf("Enter two numbers\n");
				scanf("%d%d",&s,&d);
				a=s-d;
				printf("Answer=%d\n",a);
				break;
		case 3:
				printf("Enter two numbers\n");
				scanf("%d%d",&s,&d);
				a=s*d;
				printf("Answer=%d\n",a);
				break;
		case 4:
				printf("Enter two number=\n");
				scanf("%d%d",&s,&d);
				a=s/d;
				printf("Answer=%d\n",a);
				break;
		case 5:
				printf("Enter a number=");
				scanf("%d",&s);
				a=s*s;
				printf("Answer=%d\n",a);
				break;
				default:
				printf("Sorry!\n Invalid Choice!\n");

	}
}

	getch();
}
