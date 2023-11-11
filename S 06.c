/*wap in to print the following pattern.
      A
     AB
    ABH
   ABHI
  ABHIS
 ABHISE
ABHISEK
ABHISEK
ABHISEK
 ABHISE
  ABHIS
   ABHI
    ABH
     AB
      A
*/

#include<stdio.h>
int main(){
    int i,w,p;
    char str[]="ABHISEK";
    printf("\n");
    for(i=0;i<7;i++){
        p=i+1;
        printf("\n%7.*s",p,str);
    }

    for(i=7;i>=0;i--){
        p=i+1;
        printf("\n%7.*s",p,str);
    }
}