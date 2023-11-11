//WAP  IN C TO SORT STUDENTS NAME.


#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char names[n][50];
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                char temp[50];
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    printf("\nSorted Names of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}
