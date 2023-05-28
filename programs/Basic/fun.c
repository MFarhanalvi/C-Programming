#include<conio.h>
#include<stdio.h>
int main()
{
	int x;
	for(x=1;x<3;x++)
    add();
    getch();
}
add()
{
	int a,b,c;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Sum=%d\n",c);
}

