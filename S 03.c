//wap in c to find the length of total number of characters in a string and concatinate the data stored in two different string
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, ";
    char str2[] = "world!";
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int totalLength = length1 + length2;
    char result[totalLength + 1];
    strcpy(result, str1);
    strcat(result, str2);
    printf("Length of str1: %d\n", length1);
    printf("Length of str2: %d\n", length2);
    printf("Total Length: %d\n", totalLength);
    printf("Concatenated String: %s\n", result);

}
