//Write a program to print all the no.s between m to n thereby classifying them as even and odd.
#include<stdio.h>
int main()
{
    int ini,fl;
    printf("\nEnter starting point: ");
    scanf("%d",&ini);
    printf("\nEnter ending point: ");
    scanf("%d",&fl);
    while(ini<=fl)
    {
        if(ini%2==0)
            printf("\n%d is an even number",ini);
        else
            printf("\n%d is an odd number",ini);
        ini++;
    }
}