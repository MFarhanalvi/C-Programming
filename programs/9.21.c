#include<conio.h>
#include<stdio.h>
int max(int num[3][2]);
void main()
{
	int n[3][2],i,j,m;
	for(i=0;i<3;i++)
	for(j=0;j<2;j++)
	{
		printf("Enter value for number[%d][%d]:",i,j);
		scanf("%d",&n[i][j]);
	}
	m=max(n [i][j]);
	printf("The maximum value is %d",m);
	getch();
}
int max(int num[3][2])
{
	int a,s,r;
	r=num[0][0];
	for(a=0;a<3;a++)
	for(s=0;s<2;s++)
	if(num[a][s]>r)
	r=num[a][s];
	return(r);
}
