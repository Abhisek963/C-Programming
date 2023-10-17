//Program to read no.s until -1 is encountered and also count the no. of negative, positive and zeros entered

#include<stdio.h>
int main()
{
    int no,neg=0,pos=0,zero=0,a=-1;
    printf("Enter a number: ");
    scanf("%d",&no);
    printf("\nEnter -1 to terminate",a);
    while(no!=(-1))
    {
        if(no<0)
            neg++;
        else if(no>0)
            pos++;
        else
            zero++;
        printf("\nEnter a number: ");
        scanf("%d",&no);
    }
    printf("\nCount of positive numbers entered: %d",pos);
    printf("\nCount of negative numbers entered: %d",neg);
    printf("\nCount of zeros entered: %d",zero);
    return 0;
}