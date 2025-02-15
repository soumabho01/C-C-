#include <stdio.h>

void reverseArray(int *arr, int n) {
    int *start = arr;           // Pointer to the beginning of the array
    int *end = arr + n - 1;     // Pointer to the end of the array
    while (start < end) {
        // Swap the elements pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArray(arr, n);

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
