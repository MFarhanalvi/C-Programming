 #include<conio.h>
 #include<stdio.h>
 int mul(int,int);
 void main()
 {
 	int x,y,i,r;
 	for(i=0;i<5;i++)
 	{
 		printf("Enter two numbers:\n");
 		scanf("%d %d",&x,&y);
 		r=mul(x,y);
 		if(r==1)
 		printf("%d is a multiple of %d\n",y,x);
 		else
 		printf("%d is not a multiple of %d\n",y,x);
 		
	 }
	 getch();
 }
 int mul (int a,int s)
 {
 	if(s%a==0)
 	return 1;
 	else 
 	return 0;
 }
