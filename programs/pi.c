#include<conio.h>
#include<stdio.h>
void main()
{
	int a,i;
	float r,p=3.1416,d;
	printf("1. For Area:\n");
	printf("2. For Circumferance:\n\n");
	for(i=0;i<2;i++)
	{
	printf("Enter your choice:");
	scanf("%d",&a);
	if(a==1)
	{
	printf("Enter radius:");
	scanf("%f",&r);
	d=p*r*r;
	printf("area=%f\n",d);
}
    else if(a==2)
    {
	printf("Enter radius:");
	scanf("%d",&a);
	d=2*p*r;
	printf("Circumferance:%f",d);
}
   else 
   printf("invalid choice!\nSorry!\n");
}
	getch();
	
}
