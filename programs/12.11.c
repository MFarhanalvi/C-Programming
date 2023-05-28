#include<conio.h>
#include<stdio.h>
void main()
{
	char cou[5][30],ch;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter country name:");
		gets(cou[i]);
	}
	for(i=0;i<5;i++)
	{
		ch=cou[i][0];
		switch(ch)
		{
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			printf("\t\t\n_____ Country______\n");
				
			puts(cou[i]);
		}
		
	}
	getch();
}
