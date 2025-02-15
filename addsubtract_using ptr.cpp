#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);

void calculate(int (*operation)(int, int), int a, int b);

int main() {
    int num1, num2, choice;
    int (*operation)(int, int);  

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        operation = add;
    } else if (choice == 2) {
        operation = subtract;
    } else {
        printf("Invalid choice.\n");
        return 1;  
    }
    calculate(operation, num1, num2);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

void calculate(int (*operation)(int, int), int a, int b) {
    int result = operation(a, b);  
    printf("Result: %d\n", result);
}

