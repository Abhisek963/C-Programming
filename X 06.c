#include<stdio.h>
int top=-1;
int data[5];
void push(int element){
    top++;
    data[top]=element;
}
void pop(){
    top--;
}
int main(){
    push(5);
    push(10);
    push(15);
    push(25);
    push(35);
    pop();
    for(int i=0;i<=top;i++){
        printf("%d ",data[i]);
    }
}