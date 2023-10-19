/*  **********
    **********
    **********
    **********
    **********
   for n no of rows */
#include<stdio.h>
int main()
{
    int n,i,j=1;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    while(i<=n)
    {
        while(j<=i)
        {
            printf("**********");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}