//Area of triangle using function by call by value
#include<stdio.h>
float area(float h,float b)
{
    float a=0.5*b*h;
    return a;
}

int main()
{
    float bs,ht;
    printf("Enter base and height of the triangle respectively: ");
    scanf("%f%f",&bs,&ht);
    float ar= area(bs,ht);
    printf("Area of the triangle is: %0.3f",ar);
    return 0;
}