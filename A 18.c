//Input the value of two variables a an b and strore the value of b in a and the remainder in b.
#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter two values a and b respectively: ");
    scanf("%d%d",&a,&b);
    rem= a%b;
    a= a*b;
    b= a/b;
    a= a/b;
    b= rem;
    printf("\nValue of a: %d",a);
    printf("\nValue of b: %d",b);
    return 0;
}