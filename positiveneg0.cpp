
//positive or negative number
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
