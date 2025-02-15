//23BCE7546
#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
