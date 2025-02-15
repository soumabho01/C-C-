//23BCE7546-Soumabha Sarkar
#include <stdio.h>
#include <stdlib.h>
int main() {
    int size, new_size;
    float *transactions = NULL, total = 0.0, average;
    printf("Enter the number of transactions: ");
    scanf("%d", &size);
    transactions = (float *)malloc(size * sizeof(float));
    for (int i = 0; i < size; i++) {
        printf("Transaction %d: ", i + 1);
        scanf("%f", &transactions[i]);
    }
    char choice;
    printf("Do you want to add more transactions? (y/n): ");
    scanf(" %c", &choice);
    while (choice == 'y') {
        printf("Enter the number of additional transactions: ");
        scanf("%d", &new_size);
        transactions = (float *)realloc(transactions, (size + new_size) * sizeof(float));

        for (int i = size; i < size + new_size; i++) {
            printf("Transaction %d: ", i + 1);
            scanf("%f", &transactions[i]);
        }
        size += new_size;
        printf("Do you want to add more transactions? (y/n): ");
        scanf(" %c", &choice);
    }
    for (int i = 0; i < size; i++) {
        total += transactions[i];
    }
    average = total / size;
    printf("Total transaction amount: %.2f\n", total);
    printf("Average transaction amount: %.2f\n", average);
    free(transactions); // free allocated memory
    return 0;
}

