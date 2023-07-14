#include<stdio.h>
void swap(int,int);
int main()
{
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d%d",&n,&m);
    swap(n,m);
    return 0;
}
void swap(int n,int m)
{
    n = n + m;
    m = n - m;
    n = n - m;
    printf("The value is : %d %d",n,m);
}