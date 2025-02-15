//23BCE7546
#include <stdio.h>
int add(int a, int b);
int subtract(int a, int b);
void calculate(int (*operation)(int, int), int a, int b);
int main() {
    int choice, a, b, result;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    int (*operation)(int, int) = NULL;
    if (choice == 1) {
        operation = add;  
    } else if (choice == 2) {
        operation = subtract;  
    } else {
        printf("Invalid choice!\n");
        return 1;  
    }
    calculate(operation, a, b);
    return 0;
}
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;}
void calculate(int (*operation)(int, int), int a, int b) {
    int result = operation(a, b);  
    printf("The result is: %d\n", result);}
