#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
void main()
{
	system("color 0e");
	SYSTEMTIME time;
	GetSystemTime(&time);
	printf("\nToday's Date:%d-%d-%d\n",time.wMonth,time.wDay,time.wYear);
	printf("Current Time:%d:%d:%d",time.wHour,time.wMinute,time.wSecond);
	getch();
}
