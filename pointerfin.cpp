#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr[];
    int n = 5;

    // Allocate memory for an array of 5 integers
    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
// Initialize and print the array
    for (int i = 0; i < n; i++) {
        ptr[i] = i * 10;
    }

    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    return 0;
}

