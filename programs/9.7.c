#include<conio.h>
#include<stdio.h>
void cal(int,int,char);
void main()
{
	int x,y;
	char p;
	printf("Enter 1st number:operator:2nd number:");
	scanf("%d %c %d",&x,&p,&y);
	cal(x,y,p);
	getch();
}
void cal(int a,int s,char d)
{
	switch(d)
	{
		case'+':
			printf("%d+%d=%d",a,s,a+s);
			break;
		case'-':
			 printf("%d-%d=%d",a,s,a-s);
			 break;
	    case'*':
	    	   printf("%d*%d=%d",a,s,a*s);
	    	   break;
	    case'/':
	    	printf("%d/%d=%d",a,s,a/s);
	    	break;
	   case'%':
	   	    printf("%d%%%d=%d",a,s,a%s);
	   	    break;
	   default:
	   	printf("Invalid operator!:");
	}
}
