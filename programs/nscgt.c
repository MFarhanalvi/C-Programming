#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter ending number:");
	scanf("%d",&n);
	int numbers[n];
	int squares[n];
	int cubes[n];
	int sums[n];
	for(i=1;i<=n;i++)
	{
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i]+squares[i]+cubes[i];
	  }
	  int t=0;
	  printf("Numbers:\t");
	  for(i=1;i<=n;i++)
      printf("%d\t",numbers[i]);
      printf("\nSquares:\t");
	  for(i=1;i<=n;i++)
      printf("%d\t",squares[i]);
	  printf("\nCubes:\t\t");
	  for(i=1;i<=n;i++)
      printf("%d\t",cubes[i]);
      printf("\nSums:\t\t");
      for(i=1;i<=n;i++)
      {
      	printf("%d\t",sums[i]);
      	t=t+sums[i];
	  }
	  printf("\t\tGrand Total:%d",t);
	getch();
}
