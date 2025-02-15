#include <stdio.h>

int main() {

int arr[5]; // Declaration of an array with 5 integers

int i;

// Populating the array

for(i = 0; i < 5; i++) {

arr[i] = i + 1;

}

// Printing the array elements

printf("Array elements are:\n");

for(i = 0; i < 5; i++) {

printf("%d ", arr[i]);

}

printf("\n");

return 0;

}
