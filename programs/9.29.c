#include<conio.h>
#include<stdio.h>
int fun1(int ar[20],int n);
int fun2(int ar[20],int n);
void main()
{
	int arr[20],dn,i;
	printf("Enter dimension:");
	scanf("%d",&dn);
	for(i=0;i<dn;i++)
	{
		printf("Enter any Integer posotive or negative:");
		scanf("%d",&arr[i]);
	}
		int s,s2;
		s=fun1(arr,dn);
		s2=fun2(arr,dn);
		printf("The sum of positive integer:%d\n",s);
		printf("The sum of negative integer:%d\n",s2);
		getch();
}
int fun1(int ar[20],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		if(ar[i]>0)
		sum+=ar[i];
}

return(sum);
}
int fun2(int ar[20],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{
		if(ar[i]<0)
		sum+=ar[i];
}
return(sum);
}
