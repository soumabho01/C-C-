//23BCE7546
#include <stdio.h>
#include <stdlib.h>  
int main() {
    int n, i, max;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The entered integers are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];}}
    printf("The maximum value is: %d\n", max);
    free(arr);
    printf("Memory successfully deallocated.\n");
    return 0;
}
