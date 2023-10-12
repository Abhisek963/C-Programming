#include<stdio.h>
int swap(int a, int b){
    int c =a;
    a=b;
    b=c;
    printf("a is : %d\n",a);
    printf("b is : %d\n",b);
}
int main(){
    int a=10,b=20;
    swap(a,b);
}