#include <stdio.h>

int main() {

int arr[] = {3, 5, 7, 2, 8};

int n = sizeof(arr) / sizeof(arr[0]);

int i, max;

max = arr[0]; // Assume first element is the largest

for(i = 1; i < n; i++) {

if(arr[i] > max) {

max = arr[i];

}

}
printf("The largest element is %d\n",max);

return 0;

}
