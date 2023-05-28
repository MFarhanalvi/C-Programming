#include<graphics.h>
#include<windows.h>
#include<stdio.h>
int main()
{
    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);

    initwindow(screenWidth,screenHeight,"",-3, -3);
    POINT cursorPosition;
    while(1)
    {
    GetCursorPos(&cursorPosition);
    setcolor(BLUE);
    circle(cursorPosition.x,cursorPosition.y,50);
    delay(0);
    }
    closegraph();
    return 0;
}
