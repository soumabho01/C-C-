//23BCE7546
#include <iostream>
using namespace std;

class Grandparent {
protected:
int a;

public:
Grandparent() : a(10) {}
};

class Parent : public Grandparent {
private:
int b;

public:
Parent() : b(20) {}

void show() {
cout << "a: " << a << ", b: " << b << endl;
}
};

class Child : public Parent {
public:

void display() {
show(); 
}
};

int main() {
Child c;
c.display();
return 0;
}
