//23BCE7546
#include <stdio.h>

void sumAdjacentPairs(int *arr, int n) {
    if (n < 2) {
        printf("Array needs at least two elements.\n");
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        int sum = *(arr + i) + *(arr + i + 1);  // Sum of adjacent elements
        printf("Sum of element %d and element %d: %d\n", i, i + 1, sum);
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    sumAdjacentPairs(arr, n);

    return 0;
}

