//23BCE7546
#include <iostream>
using namespace std;
class Animal {
public:

virtual void sound() {
cout << "Animal makes sound" << endl;
}
};

class Dog : public Animal {
public:

void sound() override {
cout << "Dog barks" << endl;
}
};

int main() {
Animal* animal = new Dog();
animal->sound(); 
delete animal;
return 0;
}
