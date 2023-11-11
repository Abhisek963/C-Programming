//wap in c to read and print the names of n students of a class.


#include <stdio.h>
#include<string.h>
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char names[n][50];
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
    printf("\nNames of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}
