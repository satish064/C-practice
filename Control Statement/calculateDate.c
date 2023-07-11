#include<stdio.h>
int main()
{
    int y,y1,y2,m,m1,m2,d,d1,d2,isLeap;
    printf("Enter the Birth date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter the Current date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if(d2<d1)
    {
        if(m2==2)
        {
            if(y2 % 100 != 0 && y2 % 4 == 0 || y2 % 400 == 0)
            d2+=29;
            else
            d2+=28;
        }
        else if(m2 == 5 || m2 == 7 || m2 == 10 || m2 == 12)
        {
            d2+=30;
        }
        else
        d2+=31;
    }
    if(m2<m1)
    {
        y2-=1;
        m2+=12;
    }
    y = y2-y1;
    m = m2 - m1;
    d = d2 - d1;

    printf("Difference of two dates is: ");
    printf("%d year %d month %d days\n",y,m,d);
}