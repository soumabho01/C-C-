#include <stdio.h>

// Function declaration

int add(int a, int b);

int main() {

int result = add(5, 3);

printf("The sum is: %d\n", result);

return 0;

}

// Function definition

int add(int a, int b) {

return a + b;

}
