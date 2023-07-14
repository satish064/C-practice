#include<stdio.h>
int fac(int);
int nCr(int,int);
int main()
{
    int n;
    printf("Enter the n :");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            printf("%d ",nCr(i,j));
        }printf("\n");
    }
    return 0;
}
int nCr(int n,int r)
{
    int x = fac(n)/(fac(r)*fac(n-r));
    return x;
}
int fac(int n)
{
    int pro = 1;
    for(int i = 1;i<=n;i++)
        pro*=i;
    return pro;
}