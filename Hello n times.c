#include<stdio.h>
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    l1:
    if (a=-1){
        printf("HELLO WORLD\n");
        printf("Enter any number except=-1");
        scanf("%d",&a);

        goto l1;
        }
    else{
        printf("stop");

    }
}