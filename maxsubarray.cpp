//23BCE7546-SOUMABHA SARKAR
#include <stdio.h>

int maxSubArraySum(int *arr, int n) {
    int max_sum = arr[0], current_sum = arr[0];
    for (int i = 1; i < n; i++) {
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    return max_sum;
}

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest_sum = maxSubArraySum(arr, n);
    printf("The largest sum of contiguous subarray is: %d\n", largest_sum);
    return 0;
}

