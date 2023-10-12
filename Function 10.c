#include<stdio.h>
int fibonacci_s(int n){
    int a,b,c,i;
    a=1;
    b=1;
    printf("%d\n%d",a,b );
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;

    }

}
int main()
{
    int n=0;
    printf("enter the nth term\n");
    scanf("%d",&n);
    fibonacci_s(n);

}