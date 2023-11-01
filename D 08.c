#include<stdio.h>
int sum_n(int n,int sum){
    sum=sum+n;
    int i=n-1;
    if(n<1){
        return sum;
    }
    return sum_n(i,sum);
}

int main(){
int n,sum=0;
printf("enter the value of n:\n ");
scanf("%d",&n);
printf("The sum of N numbers are:%d",sum_n(n,sum));
}