#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string publisher;
    float price;

public:
    // Parameterized constructor
    Book(string t,string p, float pr) : title(t), publisher(p), price(pr) {}

    // Copy constructor
    Book( Book b) {
        title = b.title;
        publisher = b.publisher;
        price = b.price;
    }

    // Display function
    void display()  {
        std::cout << "Title: " << title << "\nPublisher: " << publisher << "\nPrice: " << price << std::endl;
    }
};

int main() {
    // Create an object with parameters
    Book book1("C++ Programming", "TechBooks", 29.99);

    // Copy book1 to book2
    Book book2 = book1;

    std::cout << "Details of Book 1:\n";
    book1.display();

    std::cout << "\nDetails of Book 2 (Copy of Book 1):\n";
    book2.display();

    return 0;
}


