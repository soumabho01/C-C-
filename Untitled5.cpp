#include <stdio.h>

int main() {

int num;

// Taking input from the user

printf("Enter an integer: ");

scanf("%d", &num);
// Decision-making construct: if-else

if (num % 2 == 0) {

printf("%d is even.\n", num);

} else {

printf("%d is odd.\n", num);

}

return 0;

}
