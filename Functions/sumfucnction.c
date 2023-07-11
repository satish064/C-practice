#include<stdio.h>
int sum(int a,int b);

int main()
{
    int x,y;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter second Number : ");
    scanf("%d",&y);

    int s = sum(x,y);
    printf("Sum is : %d",s);
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}