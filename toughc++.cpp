#include <iostream>
using namespace std;
class Printer {
public:
    // Instance method to print an integer
    void print(int num) {
        cout << "Printing integer: " << num << endl;
    }
        // Instance method to print a string
    void print(const string& str) {
        cout << "Printing string: " << str << endl;
    }
};
int main() {
    Printer p;
    void (Printer::*printInt)(int) = &Printer::print;
    void (Printer::*printStr)(const string&) = &Printer::print;

    // Dynamically invoking the method using function pointers
    (p.*printInt)(100);
    (p.*printStr)("Hello, C++");

    return 0;
}

