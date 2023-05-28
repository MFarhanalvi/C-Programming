#include<conio.h>
#include<stdio.h>
typedef struct
{
	int no;
	int marks[5];
	int total;
	float avg;
}result;
void main()
{
	result r;
	int i,t=0;
	printf("Enter roll no:");
	scanf("%d",&r.no);
	for(i=0;i<5;i++)
	{
		printf("Enter marks of five subjects::");
		scanf("%d",&r.marks[i]);
        t=t+r.marks[i];
  	}
  	printf("\n\t___________*Result*__________\t\n");
  	printf("\tRoll No:%d\n",r.no);
  	printf("\tTotal Marks:%d\n",t);
  	r.avg=t/5.0;
  	printf("\tAverage:%f",r.avg);
	getch();
}
