#include<stdio.h>
int main()
{
    int i=1,j,sp,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n");
        sp=1;
        while(sp<=(n-i))
        {
            printf(" ");
            sp++;
        }
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        i++;
    }
    return 0;
}