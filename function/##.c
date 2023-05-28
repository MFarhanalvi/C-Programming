#include<conio.h>
#include<stdio.h>
#define act(a,b) a##b+a*b
void main()
{
    printf("a=4 and b=5\n\n");
	printf("Concatination ## operator for two  variables:\n\n\ta##b+a*b:\n\t");
	printf("Answer=%d",act(4,5));
	getch();
}
