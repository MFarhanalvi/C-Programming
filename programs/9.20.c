#include<conio.h>
#include<stdio.h>
void square(int n);
void main()
{
	int n[5],s,i;
	printf("Enter five integer:\n");
	for(i=0;i<5;i++)
	scanf("%d",&n[i]);
	printf("Calling the function......\n");
	for(i=0;i<5;i++)
	square(n[i]);
	getch();
}
 void square(int n)
{
	printf("%d\t%d\n",n,n*n);
}
