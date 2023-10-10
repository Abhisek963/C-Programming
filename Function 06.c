#include<stdio.h>
#include<conio.h>
int Large(num1, num2);
int main()
{
    int num1, num2, larg;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    larg = Large(num1, num2);
    printf("Largest = %d", larg);
    getch();
    return 0;
}
int Large(int a, int b)
{
    if(a<b)
        return b;
    else
        return a;
}


