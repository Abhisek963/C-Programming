#include<stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; ++i) {
        printf("ASCII value of %c = %d\n", str[i], str[i]);
    }

    return 0;
}


