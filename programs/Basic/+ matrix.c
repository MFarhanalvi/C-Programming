#include<conio.h>
#include<stdio.h>
#include<windows.h>
void main()
{
	system(" color 0B");
	int A[3][3],B[3][3],C[3][3],i,j;
	printf("Enter nine numbers for 1st matrix\n");
	for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
	scanf("%d",&A[i][j]);
	printf("Enter nine number for 2nd matrix\n");
	for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
	scanf("%d",&B[i][j]);
	printf("\tResult Matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		C[i][j]=A[i][j]+B[i][j];
		printf("   %d",C[i][j]);
 }
      printf("\n");
}
getch();
}
