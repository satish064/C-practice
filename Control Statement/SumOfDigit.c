#include<stdio.h>
int main()
{
    int n;
    int lastDigit , sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
      lastDigit = n % 10;
      sum += lastDigit;
      n/=10;
    }
    printf("Sum of Digits is = %d",sum);
    
    return 0;
}