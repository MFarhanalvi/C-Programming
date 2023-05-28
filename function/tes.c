#include<conio.h>
#include<stdio.h>
void main()
{
	int s=5,*j;
	j=&s;	
	printf("%d %u\n",s,j);
	printf("%d %u\n",*j,&s);
	printf("%u",*&j);

	getch(); 
}
