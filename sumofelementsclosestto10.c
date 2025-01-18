#include <stdio.h>
#include <stdlib.h>

void findClosestPair(int arr[], int n) {
    int closestSum = 0, diff = 10000;
    int num1 = 0, num2 = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum - 10) < diff) {
                diff = abs(sum - 10);
                closestSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }
    printf("Closest pair: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {1, 3, 8, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findClosestPair(arr, n);
    return 0;
}
