#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[50]={"str1=Programming makes life  Hell:"};
	char str2[50]="str2=Built in function make it Heaven:";
	strcpy(str1,str2);
	printf("After strcpy:\n");
	puts(str1);
	puts(str2);
	getch();
}
