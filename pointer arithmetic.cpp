//23BCE7546
#include <stdio.h>
void calculateAdjacentSums(int *arr, int n);
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("The array must have at least 2 elements to form pairs.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    calculateAdjacentSums(arr, n);
    return 0;
}
void calculateAdjacentSums(int *arr, int n) {
    printf("\nSum of adjacent elements:\n");
    for (int i = 0; i < n - 1; i++) {
        int sum = *(arr + i) + *(arr + i + 1);  
        printf("Sum of element %d and %d: %d\n", i, i + 1, sum);
    }
}
