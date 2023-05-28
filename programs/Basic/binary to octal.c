#include<stdio.h>
#include<math.h>
#include<conio.h>
int convertBinarytoOctal(long long binaryno);
int main()
{
    long long  binaryno;
    printf("Enter a binary number:");
    scanf("%lld",binaryno);
    printf("%lld in binary=%d in Octal",binaryno,convertBinarytoOctal(binaryno));
    getch();
}
int convertBinarytoOctal(long long binaryno)
{
    int octalno=0,decimalno=0,i=0;
    while(binaryno!=0)
    {
        decimalno+=(decimalno%10)*pow(2,i);
        ++i;
        binaryno/=10;
    }
    i=1;
    while(decimalno!=0){
        octalno+=(decimalno%8)*i;
        decimalno/=8;
        i*10;
    }
    return(octalno);
}
