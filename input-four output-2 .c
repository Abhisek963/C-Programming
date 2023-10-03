#include <stdio.h>
int main() {
    int fourDigitNumber;
    printf("Enter a four-digit number: ");
    scanf("%d", &fourDigitNumber);
    int firstTwoDigits = fourDigitNumber / 100;
    printf("The first two digits are: %d\n", firstTwoDigits);
}
