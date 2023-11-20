// Macrossproblem

#include<stdio.h>
#define d(x)(x*x*x*x)
int main(){
    int a=5;
    int b=d((a-1)+1);
    printf("%d",b);
}