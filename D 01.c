#include<stdio.h>
#include<stdlib.h>

void fun(int n){
    if(n>0){
        printf("%d\n",n);
        fun(n-1);
    }
    else{
        return;
    }
}
int main(){
    fun(5);
}
