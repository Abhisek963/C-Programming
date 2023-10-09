// Do not except an argument but returns a value


#include<stdio.h>
int add(){
    int a=10;
    int b=20;
    int c=a+b;
    return c;
}
int main(){
    int val=add();
    printf("%d",val);
}