#include<stdio.h>

void printHW(int n);

int main()
{
    printHW(5);
    return 0;
}

void printHW(int count)
{
    if(count == 0)
    return;
    printf("Hello World\n");
    printHW(count-1);
}