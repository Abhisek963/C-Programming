//wap in c to print the position of the smallest n numbers using array

#include <stdio.h>
void findSmallestN(int arr[], int size, int n) {
    if (n > size) {
        printf("Error: n is greater than the size of the array\n");
        return;
    }
    int i, j, minIndex, temp;

    for (i = 0; i < n; ++i) {
        minIndex = i;
        for (j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        printf("Position of %d is %d\n", arr[i], minIndex + 1);
    }
}
int main() {
    int size, n;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of n: ");
    scanf("%d", &n);
    findSmallestN(arr, size, n);
}
