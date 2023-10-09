// Except an argument but returns no value


#include<stdio.h>
int add( int a,int b){
    int c=a+b;
  return c;
}
int main(){
    int a=0,b=0;
    printf("enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    int val=add(a,b);
    printf("%d",val);

}