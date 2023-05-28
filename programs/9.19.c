#include<conio.h>
#include<stdio.h>
int even(int s[5]);
void main()
{
	int s,n[5],a;
	for(a=1;a<=5;a++)
	{
	printf("Enter a Integer:");
	scanf("%d",&n[a]);
}
	s=even(n);
	printf("The array contains %d even number:",s);
	getch();
}
int even(int s[5])
{
	int n=0,i;
	for(i=1;i<=5;i++)
	if(s[i]%2==0)
	n++;
	return(n);

}
