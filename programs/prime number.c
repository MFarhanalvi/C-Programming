   #include<conio.h>
   #include<stdio.h>
   void main()
   {
   	int x,i,j;
   	for(j=1;j<4;j++)
	{
   	printf("Enter a number:");
   	scanf("%d",&x);
   	for(i=2;i<=x-1;i++)
   	if(x%i==0)
   	break;
   	if(i==x)
   	printf("\n\t%d is a Prime number:\n",x);
   	else
   	printf("\n\t%d is not a Prime number:\n",x);
   }
	   getch();
   }
