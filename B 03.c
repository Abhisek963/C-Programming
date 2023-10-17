//Swap the value of two no.s using function
#include<stdio.h>
int swap(int a,int b)
{
    a*=b;
    b= a/b;
    a= a/b;
    printf("\nValue of x after swapping is: %d",a);
    printf("\nValue of y after swapping is: %d",b);
}
int main()
{
    int x,y;
    printf("Enter values of x and y respectively: ");
    scanf("%d%d",&x,&y);
    swap(x,y);
    return 0;
}