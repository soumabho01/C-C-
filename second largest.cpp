#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int largest, second_largest;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second largest
    largest = second_largest = INT_MIN;
    
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    
    if (second_largest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is %d\n", second_largest);
    }
    
    return 0;
}

