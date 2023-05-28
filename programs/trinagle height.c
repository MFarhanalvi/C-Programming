#include<conio.h>
#include<stdio.h>
void main() 
{
	char c='A';
   int n,i,j;
   printf("Enter the height of triangle=");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	for(j=1;j<=i;j++)
   	{
   		printf("%c",c);
   		c++;
	   }
	   printf("\n");
   }
   getch();
}
