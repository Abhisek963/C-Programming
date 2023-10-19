//Printing a pyramid pattern using nested loop. No of rows to be specified by user.
#include<stdio.h>
int main()
{
    int n,b,j,i=1;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n");
        b=1;
        while(b<=n-i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while(j<=i)
        {
            printf("* ");
            j++;
        }
        i++;
    }
    return 0;
}