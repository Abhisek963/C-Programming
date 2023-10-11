//n number using function

#include<stdio.h>
int sum(int n){
    int a=0;
    for(n;n>0;n--) {
        a = a + n;
    }  printf("sum is :%d\n",a);

    }
    int main()
    {
        int n;
        printf("Enter values for n\n");
        scanf("%d",&n);
        sum(n);
    }


