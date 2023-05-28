#include<conio.h>
#include<stdio.h>
typedef struct
{
	char name[25];
	int runs;
	int inings;
	int notout;
	float avg;
}cricketer;
void main()
{
	int i;
	cricketer rec[5];
		for(i=0;i<5;i++)
	{
		printf("Enter player's name:");
		fflush(stdin);
		scanf("%c",&rec[i].name);
		printf("Enter Runs:");
		fflush(stdin);
		scanf("%d",&rec[i].runs);
		printf("Enter Inings:");
		fflush(stdin);
		scanf("%d",&rec[i].inings);
		printf("Enter not out:");
		fflush(stdin);
		scanf("%d",&rec[i].notout);
		rec[i].avg=(rec[i].runs/rec[i].inings);
		printf(" Average=%f\n",rec[i].avg);	
	}
	printf("\t:________________CRICKETER'S TABLE_________________:\n\n");
	printf("\t..................................................................\n\n");
	printf("\tPlayer's name:   Runs:   Innings:   Times not out:   Average:\n");
	printf("\t..................................................................\n");
	for(i=0;i<5;i++)
	{
	printf("\t%c   ",rec[i].name);
	printf("   %d",rec[i].runs);
	printf("   %d",rec[i].inings);
	printf("   %d",rec[i].notout);
	printf("   %f",rec[i].avg);
}
	getch();
} 
