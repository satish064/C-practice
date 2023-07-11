#include<stdio.h>
int main()
{
    int fNum,sNum,Sum = 0;
    printf("Enter the two numbers: ");
    scanf("%d%d",&fNum,&sNum);
    while(fNum>0)
    {
        fNum/=2;
        sNum*=2;
        if(fNum%2==1)
        Sum +=sNum;
    }

    printf("Product is: %d",Sum);
}