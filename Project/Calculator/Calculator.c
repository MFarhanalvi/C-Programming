//CALCULATOR:
#include<process.h>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
int fact();
void gotoxy(int x,int y )
{
 	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
  //FOR FACTORIAL:
void factorial()
{
    system("color 0c");
    int n;
    printf("\n\tEnter a number:");
    scanf("%d",&n);
    printf("\n\tThe factorial of %d! is:%d",n,fact(n));
}
 int  fact(int n)
{
    if(n>0)
        return(n*fact(n-1));
    else
        return 1;


}
void loading();
int  main()
{
	int z,l,n,m,h;
	float a,s,d;
	char ch;
	system("color 0c");
	gotoxy(50,20);
	printf("___MADE_BY_ALI_RAZA_________________________________________");
	gotoxy(50,22);
	printf("_________________MINI_PROJECT_CALCULATOR____________________ ");
	gotoxy(50,24);
	printf("____________________________________________________________ ");
	gotoxy(0,60);
	printf("PRESS ANY KEY TO CONTINUE...");
	getch();
	system("CLS");
     loading();
     while(1)
	{
	    system("CLS");
    system("color 0b");
    printf("\n\t\t        _________________________      ");
    printf("\n\t\t      ||DIGITAL__________________||    ");
	printf("\n\t\t      ||_______CALCULATOR________||    ");
	printf("\n\t\t      ||_________________________||\n\n");
	printf("\n   1.For Addition:");
	printf("\n   2.For Subtraction:");
	printf("\n   3.For Multiplication:");
	printf("\n   4.For Division:");
	printf("\n   5.For Square of a number:");
	printf("\n   6.For Cube of a number:");
	printf("\n   7.For LCM:");
	printf("\n   8.For HCF:");
	printf("\n   9.For FACTORIAL:");
	printf("\n  10.For EXIT OF A PROGRAME:");
	printf("\n\n\tEnter Your choice For Operation:");
	scanf("%d",&z);
	switch (z)
	{
		case 1:
                 system("color 0c");
				printf("\tEnter 1st number:");
				scanf("%f",&a);
				printf("\tEnter 2nd number:");
				scanf("%f",&s);
				d=a+s;
				printf("\n\tAnswer=%f",d);
				break;
        case 2:
                system("color 0D");
                printf("\tEnter 1st number:");
				scanf("%f",&a);
				printf("\tEnter 2nd number:");
				scanf("%f",&s);
				d=a-s;
				printf("\n\tAnswer=%f",d);
				break;

		case 3:
		        system("color 0A");
                printf("\tEnter 1st number:");
				scanf("%f",&a);
				printf("\tEnter 2nd number:");
				scanf("%f",&s);
				d=a*s;
				printf("\n\tAnswer=%f",d);
				break;
        case 4:
                 system("color 0E");
               printf("\tEnter 1st number:");
				scanf("%f",&a);
				printf("\tEnter 2nd number:");
				scanf("%f",&s);
				d=a/s;
				printf("\n\tAnswer=%f",d);
				break;
        case 5:
                system("color 09");
		       printf("\tEnter a number:");
			   scanf("%f",&a);
			   s=a*a;
			   printf("\n\tAnswer =%f",s);
			   break;

        case 6:
             system("color 0F");
		       printf("\tEnter a number:");
			   scanf("%f",&a);
			   s=a*a*a;
			   printf("\n\tAnswer=%f",s);
			   break;
        case 7:
                     system("color 0c");
                	printf("\tEnter 1st number for LCM:");
                    scanf("%d",&n);
                    printf("\tEnter 2nd number for LCM:");
                    scanf("%d",&m);
	               for(l=n>m?n:m;l<=n*m;l=l+(n>m?n:m)){
                   if(l%n==0&&l%m==0)
	               break;
	               }
	               printf("\n\tLCM Of %d and %d=%d",n,m,l);
                    break;
        case 8:
                     system("color 0b");
                  	printf("\tEnter 1st number for HCF:");
                    scanf("%d",&n);
                    printf("\tEnter 2nd number for HCF:");
                    scanf("%d",&m);
                    for(h=n<m?n:m;h>1;h--)
                    if(n%h==0 && m%h==0)
                    break;
                    printf("\tHCF Of %d and %d=%d",n,m,h);
                    break;
        case 9:
                 system("color 0b");
                 factorial();
                 break;
        case 10:
               exit(0);
        default:
		        	printf("\tSorry!\n\tInvalid Choice!");

		        }
                getch();
		        }
}
//FOR LOADING:
void loading()
{
    int r,q;
     system("color 0A");
     printf("PLEASE WAITE FOR LOADING...");
    gotoxy(60,30);
    printf("LOADING...");
    gotoxy(60,33);
    for(r=1;r<=30;r++)
    {
        for(q=0;q<=10000000;q++);
        printf("%c",177);
    }
    gotoxy(0,60);
    printf("PRESS ANY KEY TO CONTINUE...");
    getch();

}
