#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int a=1,n=3,i,p;
	printf("The series as follows:\n");
    for(i=1;a<=40;i++) 
	{
		if(i%2==0)
		{
		p=-a;
		printf("%d\t",p);
	 } 
	 else
	 printf("%d\t",a);
    a=a+n;	  
}
	getch();
      

}

