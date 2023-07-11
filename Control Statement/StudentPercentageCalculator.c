#include<stdio.h>
int main()
{
    int totalMarks , marks1,marks2,marks3;
    printf("Enter three subjects marks(out of 100): ");
    scanf("%d%d%d",&marks1,&marks2,&marks3);
    totalMarks = marks1+marks2+marks3;
    int percentage = totalMarks/3;
    if(percentage>=85) printf("A");
    else if(percentage >=70) printf("B");
    else if(percentage >=55) printf("C");
    else if(percentage >=40) printf("D");
    else printf("E");

    return 0;

}