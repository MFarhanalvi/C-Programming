#include<conio.h>
#include<stdio.h>
void chkn(int);
void main()
{
	int a;
	printf("Enter a number:");
	   scanf("%d",&a);
	printf("Nature of number:\n");
	printf("\n..........\n\n");
	chkn(a);
	getch();
}
void chkn(int n)
{
	int c=0,i;
	for(i=2;i<n;i++)
	{
		if (n%2==0)
		c=1;
	}
	if(n%2==0 && c==0)
	printf("Is a prime even number:");
	else if(n%2==0 && c==0)
	printf("Is a prime odd number:");
	else if (n%2==0 && c!=0)
	printf("Is only an even number not prime:");
	else if (n%2!=0)
	printf("Is only an odd number not prime:");
}
