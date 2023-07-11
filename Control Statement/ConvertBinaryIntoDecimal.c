#include<stdio.h>
int main()
{
    long Binary;
    int Decimal = 0,power = 1,LastDigit,BinaryMul;
    printf("Enter a number: ");
    scanf("%d",&Binary);
    while (Binary>0)
    {
        LastDigit = Binary % 10;
        BinaryMul = power * LastDigit;
        Decimal += BinaryMul;
        power*=2;
        Binary /= 10;
    }
    printf("Decimal Number = %d",Decimal);

    return 0;
}