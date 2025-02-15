//23BCE7546
#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

void input(struct Book *b) {
    printf("Enter book title: ");
    scanf("%s", b->title);
    printf("Enter author name: ");
    scanf("%s", b->author);
    printf("Enter price: ");
    scanf("%f", &b->price);
}

void sortBooks(struct Book b[], int n) {
    struct Book temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(b[j].price > b[j+1].price) {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }
}

void displayBooks(struct Book b[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nTitle: %s, Author: %s, Price: %.2f\n", b[i].title, b[i].author, b[i].price);
    }
}

int main() {
    struct Book books[5];
    for(int i = 0; i < 5; i++) {
        input(&books[i]);
    }

    sortBooks(books, 5);
    printf("Books sorted by price:\n");
    displayBooks(books, 5);

    return 0;
}

