/*  ******
    *****
    ****
    ***
    **
    *
Printing this pattern. Range to be specified by user. */

#include<stdio.h>
int main()
{
    int n,i=1,b,j;
    printf("Enter range: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n");
        b=1;
        while(b<i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while(j<=(n+1)-i)
        {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}