#include <stdio.h>

// Function to add two numbers
void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

// Function to multiply two numbers
void multiply(int *a, int *b, int *result) {
    *result = *a * *b;
}

// Function to divide two numbers
void divide(int *a, int *b, float *result) {
    if (*b != 0) {
        *result = (float)(*a) / (*b);
    } else {
        printf("Division by zero error!\n");
    }
}

int main() {
    int num1, num2;
    int sum, product;
    float quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    add(&num1, &num2, &sum);
    multiply(&num1, &num2, &product);
    divide(&num1, &num2, &quotient);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);
    if (num2 != 0) {
        printf("Quotient: %.2f\n", quotient);
    }

    return 0;
}

