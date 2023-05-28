#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s=0,i;
	printf("Enter a number=");
	scanf("%d",&a);
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		s=s+i;
	}
	if(s==a)
    printf("%d Is a perfect number",a);
    else
    printf("%d Is not a perfect number",a);
getch();
}

