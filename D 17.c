#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int index;
    printf("Enter the index position (0 to %d): ", arr_size - 1);
    scanf("%d", &index);
    if (index >= 0 && index < arr_size) {
        printf("Element at index %d is: %d\n", index, arr[index]);
    } else {
        printf("Error: Index not found\n");
    }
}
