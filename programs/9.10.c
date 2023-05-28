 #include<conio.h>
 #include<stdio.h>
 char  grade(int);
void main()
 {
 	int a;
 	char d;
 	printf("Enter your marks:");
 	scanf("%d",&a);
 	d=grade(a);
 	printf("Your Grade is:%c",d);
 	getch();
 }
 char grade(int s)
 {
 	if(s>90)
 	return 'A';
 	else if (s>80)
 	return 'B';
 	else if(s>70)
 	return 'C';
 	else if (s>60)
 	return 'D';
 	else
 	return'F';
 }
