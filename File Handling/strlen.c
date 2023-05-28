#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void main()
{
	system("color 0B");
	int l;
	char s[30];
	printf("Enter your name:");
	gets(s);
	l=strlen(s);
	printf("%d\n",l);
	printf("%s",strrev(s));
	strupr(s);
	if(strrev(s)[0]=='a'|| strrev(s)[0]=='A'){
         printf("\n%s",s);
	}


	getch();
}
