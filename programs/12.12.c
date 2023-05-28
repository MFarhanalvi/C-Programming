#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[30],str2[30];
	int r;
	printf("Enter 1st string:");
	gets(str);
	printf("Enter 2nd string:");
	gets(str2);
	r=strcmp(str,str2);
	if(r<0)
	printf("string 1 is less than string 2:");
	else if (r==0)
	printf("string 1 is equal to string 2:");
	else
	printf("string 1 is greater than string 2:");
	getch();
}
