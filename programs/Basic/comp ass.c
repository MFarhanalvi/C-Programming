#include<conio.h>
#include<stdio.h>
void main()
{
	int a;
	printf("Enter value of a=");
	scanf("%d",&a);
	printf("value of a+=5 is =%d\n",a+=5);
	printf("value of a-=5 is =%d\n",a-=5);
	printf("value of a*=5 is =%d\n",a*=5);
	printf("value of a/=5 is =%d\n",a/=5);	
    printf("value of a%%=5 is =%d\n",a%=5);	
    getch();
}
