//Determining whether a THREE digit no is armstrong no or not
#include<stdio.h>
int main()
{
    int no,n,arm=0,tri;
    printf("Enter a no: ");
    scanf("%d",&no);
    n=no;
    while(no>=1)
    {
        int dig=no%10;
        tri=(dig*dig*dig);
        arm+=tri;
        no/=10;
    }
    if(arm == n)
        printf("\nIt is an armstrong number");
    else
        printf("\nIt is not an armstrong number");
    return 0;
}