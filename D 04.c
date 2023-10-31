#include<stdio.h>
void head_fun(int num){
    if(num>0){
        head_fun(num-1);
        printf("%d\n",num);
    }
}
int main(){
    int a=5;
    printf("use of head function\n");
    head_fun(a);
}
