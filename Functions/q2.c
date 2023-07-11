#include<stdio.h>
void Namaste();
void Bonjour();

int main()
{
    char f,ch;
    printf("Enter the country(F for Franch and I for india) : ");
    scanf("%c",&ch);
    if(ch == 'i')
    Namaste();
    else
    Bonjour();

    return 0;
}

void Namaste()
{
    printf("Namaste\n");
}
void Bonjour()
{
    printf("Bonjour\n");
}