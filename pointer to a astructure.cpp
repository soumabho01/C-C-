//23BCE7546
#include <stdio.h>
#include <stdlib.h> 
struct Book {
    char title[100];
    char author[100];
    float price;
};
void readBookInfo(struct Book *b) {
    printf("Enter the book title: ");
    getchar();  
    fgets(b->title, sizeof(b->title), stdin);
    printf("Enter the author name: ");
    fgets(b->author, sizeof(b->author), stdin);
    printf("Enter the price: ");
    scanf("%f", &b->price);
}
void displayBookInfo(struct Book *b) {
    printf("\n--- Book Information ---\n");
    printf("Title: %s", b->title);  
    printf("Author: %s", b->author);
    printf("Price: $%.2f\n", b->price);
}
int main() {
    struct Book *b = (struct Book *)malloc(sizeof(struct Book));
    if (b == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  
    }
    readBookInfo(b);
    displayBookInfo(b);
    free(b);
    return 0;
}
