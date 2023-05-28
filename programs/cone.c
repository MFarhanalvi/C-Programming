#include<conio.h>
#include<stdio.h>
void main()
{
    float e,p,g,E,P,G;
    printf("Enter current elecricity rate:");
    scanf("%f",&e);
    printf("Enter current petrol rate:");
    scanf("%f",&p);
    printf("Enter current gas rate:");
    scanf("%f",&g);
    E=e*1.1;
    P=p*1.1;
    G=g*1.1;
    printf("New elericity rate:%f\n",E);
    printf("New petrol rate:%f\n",p);
    printf("New gas rate:%f",G);
    getch();


}

