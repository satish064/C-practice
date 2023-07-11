#include<stdio.h>
int main()
{
    int rs,choice,notes;
    printf("Enter the totoal amount in Rs: ");
    scanf("%d",&rs);
    printf("Enter the value of note which you want to begin: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 100:
        notes = rs/100;
        printf("100 rupees notes = %d\n",notes);
        rs%=100;
        case 50:
        notes = rs/50;
        printf("50 rupees notes = %d\n",notes);
        rs%=50;
        case 20:
        notes = rs/20;
        printf("20 rupees notes = %d\n",notes);
        rs%=20;
        case 10:
        notes = rs/10;
        printf("10 rupees notes = %d\n",notes);
        rs%=10;
        case 5:
        notes = rs/5;
        printf("5 rupees notes = %d\n",notes);
        rs%=5;
        case 1:
        notes = rs/1;
        printf("1 rupees notes = %d\n",notes);
        break;
        default:
        printf("Enter only valid values!!!");
    }
}