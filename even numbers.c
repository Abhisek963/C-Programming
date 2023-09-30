#include<stdio.h>
int main(){
    int a,b;
    printf(" Enter the initial value of a:\n ");
    scanf("%d",&a);
    printf(" Enter the finial value of b:\n ");
    scanf("%d",&b);
    while(a<b) {
        if (a % 2 == 0) {
            printf("%d is a even number \n", a);
        }
        a++;
    }
}
