#include<stdio.h>
int fac(int);
int nCr(int,int);
int main()
{
    int n,r;
    printf("Enter the n and c for permutation and combination: ");
    scanf("%d%d",&n,&r);
    int nr = nCr(n,r);
    printf("The nCr is : %d",nr);
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