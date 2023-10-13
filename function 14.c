#include<stdio.h>
int triangle(int b,int h){
    int area=0.5*b*h;
    printf("%d",area);
    return area;
}
int main(){
int b=0,h=0;

    printf("Enter the values of b and h:\n");
    scanf("%d %d",&b,&h);
    triangle(b,h);
}