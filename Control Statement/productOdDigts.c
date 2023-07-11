#include<stdio.h>
int main()
{
    int n,lastDigit,productSum = 1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n == 0)
    productSum = 0;
    else
    {
     while(n>0)
    {
        lastDigit = n % 10;
        productSum *= lastDigit;
        n/=10;
    }   
    }
    
    printf("Product of sum is = %d",productSum);
}