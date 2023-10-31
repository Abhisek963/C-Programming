#include<stdio.h>
#include<stdlib.h>

int a(int n);
int b(int n);
int c(int n);

int main(){
a(5);
}
int a(int n){
    if(n>0){
        printf("%d\n",n);
        b(n);
    }
    else{
        exit(0);
    }
}
int b(int n){
    c(n);
}
int c(int n){
    a(n-1);
}
