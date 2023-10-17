//Calculate area and circumference of a circle by deaclaring the value of pie as a global variable. Also use functions.
#include<stdio.h>
#include <math.h>
float pi= M_PI;
float area(int r){
    float ar= pi*r*r;
    return ar;
}
float circum(float r){
    float peri= 2*pi*r;
    return peri;
}
int main()
{
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    printf("\nArea of the circle is: %f",area(r));
    printf("\nCircumference of the circle is: %f",circum(r));
    return 0;
}