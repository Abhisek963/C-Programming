//leap year or not


#include<stdio.h>
int leap_year(int year){
    if(year%4==0 && year%100!=0||year%400==0) {
        printf("it is a leap year:%ld \n", year);
    }
    else {
        printf("it is not a leap year");
    }
}
int main(){
     int year;
    printf("Enter the year:");
    scanf("%d",&year);
    leap_year(year);
}