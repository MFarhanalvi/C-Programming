#include<conio.h>
#include<stdio.h>
void main()
{
   int n,num,r,sum;
   printf("Enter a number:");
   scanf("%d",&num);
   n=num;
   sum=0;
   while(n!=0)
   	{
   		r=n%10;
   		sum=sum+(r*r*r);
   		n/=10;
	   }
	   if(sum==num)
	   printf("%d Is an Armstrong number:",num);
	   else
	   printf("%d Is not an Armstrong number:",num);
getch();

}

