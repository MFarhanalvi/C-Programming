#include<conio.h>
#include<stdio.h>
void main()   
{
  char c;
  printf("Enter any alphabet:");
  scanf("%c",&c);
  if(c=='A'||c=='a'||c=='E'||c=='e'||c=='i'||c=='I'||c=='O'||c=='o'||c=='U'||c=='u')
  printf("You entered a vowel:%c",c);
  else
  printf("You did not enter a vowel:%c",c);
  getch();	
}
