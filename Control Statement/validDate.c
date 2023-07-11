#include<stdio.h>
int main()
{
    int date,month,year,flag = 1,isLeap = 0;
    printf("Enter the date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&date,&month,&year);

    if(year % 400 == 0 || year % 100 != 0 && year % 4 ==0 )
    isLeap = 1;

    if(year < 1850 || year > 2050 || month < 1 || month > 12 || date < 1 || date > 31)
    flag = 0;
    else if(month == 2)
    {
        if(date == 30 || date == 31 || (date == 29 && !isLeap))
        flag = 0;
    }
    else if(month == 4 || month == 6 || month ==11)
    {
        if(date == 31) flag = 0;
    }

    if(flag == 0)
    printf("Not a valid date!!!");
    else
    printf("Valid date");

    return 0;
}