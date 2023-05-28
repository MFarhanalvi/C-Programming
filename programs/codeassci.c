#include<conio.h>
#include<stdio.h>
void main()
{
	int n,o;
	char l;
	printf("1.Convert ASCII value into Character:\n");
	printf("2.Convert Character into ASCII vlaue:\n\n");
    printf("Enter your choice:");
    scanf("%d",&o);
    switch(o)
    {
    	case 1:
    		printf("Enter a number:");
    		scanf("%d",&n);
    		char num1=n;
    		printf("The corresponding character is:%c",num1);
    		break;
    	case 2:
    		printf("Enter a character:");
    		fflush(stdin);
    		scanf("%c",&l);
    		int chr1=l;
    		printf("The corresponding value is:%d",chr1);
    		break;
    		default:
    			printf("Invalid choice!\nsorry!");
	}
	getch();
}

