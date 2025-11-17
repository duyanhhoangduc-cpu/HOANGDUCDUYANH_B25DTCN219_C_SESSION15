#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < newSize; j++) {
            if (arr[i] == arr[j])
                break;
        }
        if (j == newSize) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    return newSize;
}

int main() {
    int arr[] = {1, 3, 2, 3, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    size = removeDuplicates(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

