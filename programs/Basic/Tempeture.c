#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#define celsius -17.22222
#define kelvin 274.15
#define fahernhite -457.87
void main()
{
    system("color 0e");
    int a;
    float p,f,c,k;
    while(1){
            system("cls");
    printf("\t\t\t\tTemperature Scale Thermometer:\n");
    printf("\n\n1.Conversion of Fahernhite into Celsius:\n");
    printf("2.Conversion of Celsius into Kelvin:\n");
    printf("3.Conversion of Kelvin into Fahernhite:\n");
    printf("4.Exit:\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    printf("Enter Temperature in Fahernhite:");
    scanf("%f",&f);
    p=f*celsius;
     printf("Temperature in Celsius:%fC",p);
     break;
    case 2:
          printf("Enter Temperature in Celsius:");
    scanf("%f",&c);
    p=c*kelvin;
     printf("Temperature in Kelvin:%fK",p);
        break;
    case 3:
          printf("Enter Temperature in Kelvin:");
    scanf("%f",&k);
    p=k*fahernhite;
     printf("Temperature in Celsius:%fF",p);
     break;
    case 4:
        exit(0);
        break;
    default:printf("Invalid Choice:");
}
getch();
    }
}

