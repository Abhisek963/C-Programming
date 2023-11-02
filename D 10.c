// Function to calculate the sum of n numbers using head recursion
#include<stdio.h>
#include<stdlib.h>
int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of first %d numbers is: %d\n", n, sum(n));
}