#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *x,char *y)
{
    char ch;
    ch=*x;
    *x=*y;
    *y=ch;
}
void permutation(char *s,int i,int n){
  static int count;
  int j;
  if(i==n){
    count++;
    printf("%s,",s);
  }
  else
  {
      for(j=i;j<=n;j++)
        {
        swap(s+i,s+j);
        permutation(s,i+1,n);
        swap(s+i,s+j);//BACKTRACKING:
      }
  }
}
int main()
{
   char str[10];
   printf("\nENTER THREE CHARACTER:");
   gets(str);
   printf("PERMUTATION:\n\n");
   permutation(str,0,strlen(str)-1);
   getch();

}
