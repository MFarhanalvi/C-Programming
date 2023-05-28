#include<stdio.h>
void main()
{
	system("color 0e");
	int a,b,c;
	FILE *fp;
	fp=fopen("file.txt","r");
	while(fscanf(fp,"%d,%d,%d",&a,&b,&c)>0)
	printf("\n\ta=%d b=%d c=%d\nSum=%d\n",a,b,c,a+b+c);
	fclose(fp);
	getch();
}
