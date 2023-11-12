//wap in c to insert a number at a given location in a array.

#include <stdio.h>
void insertNumber(int arr[], int *size, int location, int number) {
    if (location < 0 || location > *size) {
        printf("Error: Invalid location\n");
        return;
    }
    for (int i = *size; i > location; --i) {
        arr[i] = arr[i - 1];
    }
    arr[location] = number;
    (*size)++;
    printf("Updated array after insertion:\n");
    for (int i = 0; i < *size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size, location, number;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size + 1];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the location to insert the number: ");
    scanf("%d", &location);
    printf("Enter the number to insert: ");
    scanf("%d", &number);
    insertNumber(arr, &size, location, number);
}
