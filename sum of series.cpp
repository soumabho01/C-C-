//23BCE7546
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sumSeries() {
    double sum = 0.0;
    for (int i = 1; i <= 5; i++) {
        sum += (double)factorial(i) / i;
    }
    return sum;
}

int main() {
    printf("The sum of the series is: %.2f\n", sumSeries());
    return 0;
}

