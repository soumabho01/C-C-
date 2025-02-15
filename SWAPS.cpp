//23BCE7546-SOUMABHA SARKAR
#include <stdio.h>
#include <stdlib.h>

void cyclicswap(int *arr, int n, int swaps) {
    for (int s = 0; s < swaps; s++) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int *arr = (int *)malloc(4 * sizeof(int));
    printf("Enter 4 integers:\n");
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }

    int swaps;
    printf("No of swaps: ");
    scanf("%d", &swaps);

    cyclicswap(arr, 4, swaps);

    printf("Value after swapping:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n4-digit number: %d%d%d%d\n", arr[0], arr[1], arr[2], arr[3]);

    free(arr); 
    return 0;
}

