#include<conio.h>
#include<stdio.h>
#include<windows.h>
void main()
{

	int a,s,d,f=1;
	while(1){
    system("cls");
	printf("1. For Multiplication.\n");
	printf("2. For Subtraction.\n");
	printf("3. For Exit.\n");
    printf("Enter your Choice = ");
	scanf("%d",&a);
	switch (a)
	{

	case 1:
			printf(" Enter two numbers\n");
			scanf("%d%d",&a,&s);
			d=a*s;
			printf("Answer=%d\n",d);
			break;
	case 2:
			printf("Enter two numbers\n");
			scanf("%d%d",&a,&s);
			d=a-s;
			printf("Answer=%d\n",d);
			break;
			default:
			printf("Invalid Choice\n");
    case 3:
        exit(0);
        break;
	}
			getch();
}
}
