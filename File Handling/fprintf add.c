#include<stdio.h>
void main()
{
	system("color 0e");
	FILE *fp;
	int a,s,d,f;
	fp=fopen("add","a");
	printf("Enter two numbers for Addition:\n");
	scanf("%d %d",&a,&s);
	fprintf(fp,"Sum of %d and %d=%d\n",a,s,a+s);
	printf("Enter two numbers for Subtraction:\n");
	scanf("%d %d",&d,&f);
	fprintf(fp,"Subtract of %d and %d=%d\n",d,f,d-f);
	fclose(fp);
}
