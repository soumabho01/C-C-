//23BCE7546	

#include <stdio.h>

void separateOddEven(int arr[], int size, int odd[], int even[], int *oddCount, int *evenCount) {
    *oddCount = 0;
    *evenCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[(*evenCount)++] = arr[i];
        } else {
            odd[(*oddCount)++] = arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int odd[size], even[size];
    int oddCount, evenCount;

    separateOddEven(arr, size, odd, even, &oddCount, &evenCount);

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
