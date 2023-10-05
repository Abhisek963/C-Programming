#include<stdio.h>
int main(){
    int a,b;
    int dividend, divisor, remainder;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);

    if(a>b){
        dividend=a;
        divisor=b;
    }
    else{
        dividend=b;
        divisor=a;
    }
    while(divisor){
        remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    printf("GCD of %d&%d=%d",a,b,dividend);
}