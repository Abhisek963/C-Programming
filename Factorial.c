#include<stdio.h>
int main(){
    int num, product=1;
    printf("Enter the number whose factorial to be calculated:\n");
    scanf("%d",&num);
    while(num>0){
        product=product*num;
        num--;
    }
    printf("the factorial of the above no is:%d",product);
}