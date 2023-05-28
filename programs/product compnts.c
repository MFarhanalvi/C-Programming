#include<conio.h>
#include<stdio.h>
void main()
{
	int n,i,j,s=0;
	printf("Enter a number=");
	scanf("%d",&n);
	printf("Products components of %d are\n",n);
	for(i=n;i>=s;i--)
	for(j=1;j<=n;j++)
	{
		if(i*j==n)
		{
			printf("%d*%d\n",i,j);
			s=j+1;
		}
	}
	getch();
}
