#include <stdio.h>

void rotateArray(int arr[], int n, int size) {
    n = n % size; // Handle cases where n > size
    for (int i = 0; i < n; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n;

    printf("Enter positions to rotate: ");
    scanf("%d", &n);

    printf("Original array: ");
    printArray(arr, size);

    rotateArray(arr, n, size);

    printf("Rotated array: ");
    printArray(arr, size);

    return 0;
}
