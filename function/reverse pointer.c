#include<conio.h>
#include<stdio.h>
char* reverse(char*);
int length (char* );
void main()
{
 printf("length=%d\n",length("computer"));
 printf("%s",reverse("computer"));
  getch();	
}
 char* reverse (char *p)
 {
 	int l,i;
 	char t;
 	for(l=0;*(p+i)!='\0';l++);
 	for(i=0;i<l/2;i++)
 	{
 		t=*(p+i);
 		*(p+i)=*(p+l-1-i);
 		*(p+l-1-i)=t;	
	 }
	 return(p); 
 }
  int length (char *p)
 {
 	int i;
 	for(i=0;*(p+i)!='\0';i++);
 	return(i);
 }

