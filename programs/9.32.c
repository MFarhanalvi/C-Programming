  #include<conio.h>
  #include<stdio.h>
   int factorial(int a);
  void main()
  {
  	int n,s;
  	printf("Enter a number:");
  	scanf("%d",&n);
  	s=factorial(n);
  	printf("The factorial of %d is %d:",n,s);
    getch();
  }
  int factorial(int a)
  {
  	int i,d=0;
  	if(a==0)
  	return(1);
  	else
  	return a*factorial(a-1);



  }
