//  * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * *
//Printing the above pattern

#include<stdio.h>
int main()
{
    int i=1,j=1,b;
    printf("* * * * *");
    while(i<=3)
    {
        printf("\n*");
        b=1;
        while(b<=7)
        {
            printf(" ");
            b++;
        }
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i++;
    }
    printf("\n* * * * *");
    return 0;
}