#include<conio.h>
#include<stdio.h>
int main()
{
#ifdef country
printf("%s is a great country",country);
#endif
#ifndef country
printf("I Love my country:");
#endif
getch();
}
