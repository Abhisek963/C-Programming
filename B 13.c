/*       *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
     * * * * *
      * * * *
       * * *
        * *
         *
Pattern printing */

#include<stdio.h>
int main()
{
    int b2,j2,i2=1;
    while(i2<=6)
    {
        printf("\n");
        b2=1;
        while(b2<=6-i2)
        {
            printf(" ");
            b2++;
        }
        j2=1;
        while(j2<=i2)
        {
            printf("* ");
            j2++;
        }
        i2++;
    }
    int i=1,j,b;
    while(i<=5)
    {
        printf("\n");
        b=1;
        while(b<=i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while(j<=(5+1)-i)
        {
            printf("* ");
            j++;
        }
        i++;
    }
    return 0;
}