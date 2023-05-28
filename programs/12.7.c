#include<conio.h>
#include<stdio.h>
void main()
{
	char str[50];
	int i,v;
	i=v=0;
	printf("Enter a string:");
	gets(str);
	while(str[i]!='\0')
	{
		switch(str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				v++;
		}
		i++;
	}
	printf("The string has %d vowels in it.",v);
	getch();
}
