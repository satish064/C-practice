#include<stdio.h>
int main()
{
    
    long factorial,product = 1;
    printf("Enter a number: ");
    scanf("%d",&factorial);
    if(factorial == 0)
    product = 0;
    else
    {
        while(factorial>0)
        {
            product *= factorial;
            factorial--;
        }
    }

    printf("Factorial is = %ld",product);

    return 0;
}