//23BCE7546-Soumabha Sarkar
#include <stdio.h>
#include <string.h>

#define MAX 200

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};
void withdraw(struct Customer *cust, float amount) {
    if (cust->balance >= amount) {
        cust->balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    } else {
        printf("Insufficient balance!\n");
    }}
void deposit(struct Customer *cust, float amount) {
    cust->balance += amount;
    printf("Deposited: %.2f\n", amount);
}
void printLowBalance(struct Customer customers[], int count) {
    printf("Customers with balance below Rs.100:\n");
    for (int i = 0; i < count; i++) {
        if (customers[i].balance < 100) {
            printf("Account Number: %d, Name: %s, Balance: %.2f\n",
                   customers[i].accountNumber, customers[i].name, customers[i].balance);
        }}}
int main() {
    struct Customer customers[MAX];
    int count;

    printf("Enter number of customers: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        printf("Enter account number, name and balance for customer %d:\n", i + 1);
        scanf("%d %s %f", &customers[i].accountNumber, customers[i].name, &customers[i].balance);
    }
    printLowBalance(customers, count);
    return 0;
}

