#include<conio.h>
#include<stdio.h>
int main()
{
	int x;
	printf("Enter your marks=");
	scanf("%d",&x);
	if (x>90)
	printf("Grade A");
	else if(x>80)
	printf("Grade B");
	else if(x>70)
	printf("Grade c");
	else
	printf("Grade D");
	getch();
}
