#include<stdio.h>
void calculateGst(float n);
int main()
{
    float price;
    printf("Enter a price : ");
    scanf("%f",&price);
    calculateGst(price);
    printf("%f",price);
    return 0;
}
void calculateGst(float n)
{
    n += (0.18 * n);
    printf("Gst value is : %.2f\n",n);
}