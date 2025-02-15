

#include <stdio.h>

void reverseArray(int arr[], int size) {

int start = 0;

int end = size - 1;

int temp;

while(start < end) {

temp = arr[start];

arr[start] = arr[end];

arr[end] = temp;

start++;

end--;

}

}

int main() {

int arr[] = {1, 2, 3, 4, 5};

int n = sizeof(arr) / sizeof(arr[0]);

int i;

reverseArray(arr, n);

printf("Reversed array:\n");

for(i = 0; i < n; i++) {

printf("%d ", arr[i]);

}

printf("\n");

return 0;

}
