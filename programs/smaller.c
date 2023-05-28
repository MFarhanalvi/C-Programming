#include<conio.h>
#include<stdio.h>
void main()
{
	int a,s,d;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&a,&s,&d);
	if (a<s)
    {
    	if(a<d)
    	printf("smallest number is=%d",a);
    	else
    	printf("smallest number is=%d",d);
	}
	else
	{ 
	if(s<d)
	printf("smallest number is =%d",s);
	else 
	printf("smallest number  is =%d",d);	
	}
    getch();
}


