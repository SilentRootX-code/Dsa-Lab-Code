#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[10] = {75, 29, 14, 56, 88, 42, 9, 61, 33, 91};
    int n = 10;

    printf("Original array:\n");
    printArray(arr, n);

    for (int j = 0; j < n - 1; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }

    printf("\nIntermediate array (after 1st iteration):\n");
    printArray(arr, n);

    for (int i = 1; i < n - 1; i++) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }

    printf("\nFinal completely sorted array:\n");
    printArray(arr, n);

    return 0;
}