//Program to calculate average of the no.s entered by the user

#include<stdio.h>
int main()
{
    int no,sm=0,count=0,a=-2;
    float avg;
    printf("Enter number to find average: ");
    scanf("%d",&no);
    printf("\nEnter -2 to terminate",a);
    while(no!=(-1))
    {
        count++;
        sm+=no;
        printf("\nEnter number to find average: ");
        scanf("%d",&no);
    }
    avg= (sm/count);
    printf("\nThe total sum is: %d",sm);
    printf("\nAverage of the no.s entered is: %f",avg);
    return 0;
}