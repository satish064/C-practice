#include<stdio.h>
int main()
{
    int d,m,y,flag = 0,isLeap = 0;
    printf("Enter the date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);
    if(d < 1 || d > 31 || m < 1 || m > 12 || y < 1850 || y>2050)
    flag = 1;
    else if(m == 2)
    {
        if(y%100 != 0 && y % 4 == 0 || y % 400 == 0 || (d == 29 && !isLeap))
        isLeap = 1;
        else 
        flag = 1;
    }
    else if(m ==4 || m == 6 || m == 11)
    {
        if(d == 31) flag = 1;
    }
    if(flag == 1)
    printf("Not a valid date!!!");
    else
    printf("Valid date");
}