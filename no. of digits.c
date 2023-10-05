#include<stdio.h>
int main(){
    int a;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld",&a);
    do{
        count++;
         a/= 10;
    } while(a != 0);
    printf("Total digits: %d", count);
    return 0;
}