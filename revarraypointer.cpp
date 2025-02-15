#include <stdio.h>

// Function to reverse the array using pointers
void reverseArray(int *arr, int n) {
    int *start = arr;          // Pointer to the start of the array
    int *end = arr + n - 1;    // Pointer to the end of the array

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

// Function to print the array
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};  // Array to be reversed
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate size of the array

    printf("Original array: ");
    printArray(arr, n);

    // Call the reverseArray function
    reverseArray(arr, n);

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}
