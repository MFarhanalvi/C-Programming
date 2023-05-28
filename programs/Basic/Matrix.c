#include<windows.h>
#include<conio.h>
#include<stdio.h>
int main()
{
    system("color 0a");
	int A[3][3],B[3][3],C[3][3],i,j,k,sum;
	printf("Enter nine numbers for 1st matrix\n");
	for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
	scanf("%d",&A[i][j]);
	printf("Enter nine number for 2nd matrix\n");
	for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
	scanf("%d",&B[i][j]);
	printf("Product of Matrix:\n");
	for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
            {
               	sum=0;
            for(k=0;k<=2;k++)
			sum=sum+A[i][k]*B[k][j];
        C[i][j]=sum;
		}
		for(i=0;i<=2;i++)
        {
        for(j=0;j<=2;j++)
        printf("%d  ",C[i][j]);
        printf("\n");
        }
getch();
}
