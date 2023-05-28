#include<conio.h>
#include<stdio.h>
#include<windows.h>
void main()
{
	system("color 0B");
	int n,c;
	printf("Enter a number=");
	scanf("%d",&n);
	for(c=2;c<n;c++)
	{
		if(n%c==0)
		break;
	}
	if(n==c)
	printf("%d Is a Prime number",n);
	else
	printf("%d Is a composite number",n);
	getch();
}
