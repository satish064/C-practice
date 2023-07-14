#include<stdio.h>
long int power(long int,long int);
int main()
{
    long int b,p;
    printf("Enter the base and the power : ");
    scanf("%ld%ld",&b,&p);
    printf("%ld rasie to the power %ld is : %ld",b,p,power(b,p));
    return 0;
}
long int power(long int b,long int p)
{
    long int po = 1;
    for(int i = 1;i<=p;i++)
    po*=b;
    return po;
}