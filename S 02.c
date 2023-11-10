//WAP IN C TO CONCATENATE 4 STRING
#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "I ";
    char str2[] = "love ";
    char str3[] = "anime and ";
    char str4[] = "manga";
    int totalLength = strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4);
    char result[totalLength + 1];
    strcpy(result, str1);
    strcat(result, str2);
    strcat(result, str3);
    strcat(result, str4);
    printf("Concatenated String: %s\n", result);
}
