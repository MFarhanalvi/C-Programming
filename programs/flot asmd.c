#include<conio.h>
#include<stdio.h>
void main()
{
   float a,s;
   char p;
   printf("Enter 1st floating number=");
   scanf("%f",&a);
    printf("Enter 2nd floating number=");
   scanf("%f",&s);
   printf("1.For addition\n2.For subtractoin\n3.For multiplication\n4.For Division\n");
   printf("choice for operater:");
   scanf("%d",&p);
 
   switch(p)
   {
   	case 1:
   		printf("Answer=%f",a+s);
   		break;
   	case 2:
   		printf("Answer=%f",a-s);
   		break;
   	case 3:
   		printf("Answer=%f",a*s);
   		break;
   	case 4:
   		if(s==0)
   		printf("Division by zero!");
   		else
   		printf("Answer=%f",a/s);
   		break;
   		default:
   			printf("Invalid choice!\nsorry!");
   }
getch();
}

