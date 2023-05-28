#include<conio.h>
#include<stdio.h>
void main()
{
  int a,s,d,f,j,k,l;
  printf("Enter five integer numbers\n");
  scanf("%d%d%d%d%d",&a,&s,&d,&f,&j);
  k=l=a;
  if(s<k)k=s;
  if(d<k)k=d;
  if(f<k)k=f;
  if(j<k)k=j;
  if(s>l)l=s;
  if(d>l)l=d;
  if(f>l)l=f;
  if(j>l)l=j;
  printf("smallest number is =%d\n",k);
  printf("largest number is =%d",l);
  getch();
}
