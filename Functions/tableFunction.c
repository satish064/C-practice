#include<stdio.h>
void Table(int n);

int main()
{
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);
   printf("Table :\n");
   Table(n);
   return 0; 
}
void Table(int n)
{
    for(int i = 1;i<=10;i++)
    {
       int tab = i*n;
       printf("%d * %d = %d\n",n,i,tab);
    }
}