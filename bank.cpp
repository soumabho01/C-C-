#include <stdio.h>

struct BankAccount {
    int accountNumber;
    char holderName[50];
    float balance;
};

void input(struct BankAccount *b) {
    printf("Enter account number: ");
    scanf("%d", &b->accountNumber);
    printf("Enter account holder's name: ");
    scanf("%s", b->holderName);
    printf("Enter balance: ");
    scanf("%f", &b->balance);
}

void displayRichCustomers(struct BankAccount b[], int n) {
    for(int i = 0; i < n; i++) {
        if(b[i].balance > 10000) {
            printf("\nAccount: %d, Holder: %s, Balance: %.2f\n", b[i].accountNumber, b[i].holderName, b[i].balance);
        }
    }
}

void withdrawAmount(struct BankAccount *b, float amount) {
    if(b->balance >= amount) {
        b->balance -= amount;
        printf("Withdrawal successful! New balance: %.2f\n", b->balance);
    } else {
        printf("Insufficient balance!\n");
    }
}

int main() {
    struct BankAccount customers[5];
    for(int i = 0; i < 5; i++) {
        input(&customers[i]);
    }

    displayRichCustomers(customers, 5);

    int accNumber;
    float amount;
    printf("Enter account number to withdraw from: ");
    scanf("%d", &accNumber);
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    for(int i = 0; i < 5; i++) {
        if(customers[i].accountNumber == accNumber) {
            withdrawAmount(&customers[i], amount);
            break;
        }
    }

    return 0;
}

