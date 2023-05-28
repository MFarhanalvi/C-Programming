#include<windows.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	system("color 0B");
	int z,a,s,d;
	printf("\n1.Addition.");
	printf("\n2.Odd-Even.");
	printf("\n3.Printing first  Natural numbers.");
	printf("\n4.square of numbers.");
	printf("\n\nEnter Yor choice=");
	scanf("%d",&z);
	switch (z)
	{
		case 1:
				printf("Enter two numbers=");
				scanf("%d%d",&a,&s);
				d=a+s;
				printf("\n sum is=%d",d);
				break;
		case 2:
				printf("Enter a number=");
				scanf("%d",&a);
				a%2==0?printf("Even number"):printf("Odd number");
				break;
		case 3:
				printf("Enter a number=");
				scanf("%d",&a);
				for(s=1;s<=a;s++)
		        printf("%d ",s);
		        break;
		case 4:
		       printf("Enter a number=");
			   scanf("%d",&a);
			   s=a*a;
			   printf("\nSquare =%d",s);
			   break;
		        default:
		        	printf("Invalid Choice!");
		        }
					getch();
}
