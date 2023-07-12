#include<stdio.h>
int squareArea(float);
int circleArea(float);
int rectangleArea(int , int);
int main()
{
    float n,r;
    printf("Enter a side : ");
    scanf("%f",&n);
    printf("The are of the square is : %d\n",squareArea(n));

    printf("Enter a radius : ");
    scanf("%f",&r);
    printf("The area of the circle is : %d\n",circleArea(r));
    
    printf("Enter a length and width of the rectangle : ");
    int l , w;
    scanf("%d%d",&l,&w);
    printf("The area of the rectangle is : %d\n",rectangleArea(l,w));
}
int squareArea(float n)
{
    float area = n * n;
    return area;
}
int circleArea(float r)
{
    float pi = 3.14;
    float area = pi * r * r;
    return area;
}
int rectangleArea(int l , int r )
{
    int area = l * r;
    return area;
}