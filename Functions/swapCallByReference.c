#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main()
{
    int a = 5,b = 7;
    swap(&a,&b);
    printf("Value of a is: %d\n",a);
    printf("Value of b is: %d",b);
    return 0;
}