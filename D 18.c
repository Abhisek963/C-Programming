#include<stdio.h>
int sum(int n);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a number.\n");
        return 1;
    }
    printf("Sum of first %d numbers is: %d\n", n, sum(n));

    return 0;
}
int sum(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n + sum(n-1);
        }
}