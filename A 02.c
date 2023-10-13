//Write a program in c to take value of dishes which takes the input from the user from a predefined resturant menu and finally calculates the total bill of the items.
#include <stdio.h>
int main()
{
    int a,qty,rate,total;
    printf("MENU CARD:");
    printf("Select your drink:");
    printf("\n1.COFFEE\n2.TEA\n3.COLD COFFEE\n4.MILK SHAKE\n5.cake\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("\nYou have selected Coffee.\n Enter the quantity :");
            scanf("%d",&qty);
            rate=5;
            total=qty*rate;
            printf("\nTotal amount :%d",total);
            break;
        case 2:
            printf("\nYou have selected Tea.\n Enter the quantity :");
            scanf("%d",&qty);
            rate=10;
            total=qty*rate;
            printf("\nTotal amount :%d",total);
            break;
        case 3:
            printf("\nYou have selected Cold coffee.\n Enter the quantity :");
            scanf("%d",&qty);
            rate=15;
            total=qty*rate;
            printf("\nTotal amount :%d",total);
            break;
        case 4:
            printf("\nYou have selected Milk shake.\n Enter the quantity :");
            scanf("%d",&qty);
            rate=20;
            total=qty*rate;
            printf("\nTotal amount :%d",total);
            break;
        case 5:
            printf("\nYou have selected cake.\n Enter the quantity :");
            scanf("%d",&qty);
            rate=15;
            total=qty*rate;
            printf("\nTotal amount :%d",total);
            break;
        default:
            printf("\nSorry Unavailable...%ds",a);
            break;
    }
}