// wap in c to add two complex numbers.

#include<stdio.h>
int main(){
    struct complex{
        int real;
        int img;
    }c1,c2,c3;
    c1.real=10,c1.img=15;
    c2.real=15,c2.img=20;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
printf("%d+i%d",c3.real,c3.img);
}