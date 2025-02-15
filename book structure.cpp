#include <stdio.h>
#include<string.h>
// Define the structure Book
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    
    struct Book *ob1;
    struct Book ob;

    ob1 = &ob;

    printf("Enter the title of the book: ");
    strcpy(ob1->title,"ok");
    printf("Enter the author of the book: ");
    strcpy(ob1->author,"okweff");

    printf("Enter the price of the book: ");
    scanf("%f", &ob1->price);

    
    printf("\nBook Details:\n");
    printf("Title: %s",ob1->title );
    printf("Author: %s", ob1->author);
    printf("Price: $%.2f\n", ob1->price);

    return 0;
}

