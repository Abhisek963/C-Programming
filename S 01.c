#include <stdio.h>
#include <string.h>
int main() {
    char friends[5][50];
    printf("Enter names of 5 friends:\n");
    for (int i = 0; i < 5; i++) {
        printf("Friend %d: ", i + 1);
        fgets(friends[i], sizeof(friends[i]), stdin);
        friends[i][strcspn(friends[i], "\n")] = '\0';
    }
    printf("\nNames in descending order of index:\n");
    for (int i = 4; i >= 0; i--) {
        printf("Friend %d: %s\n", i + 1, friends[i]);
    }
}
