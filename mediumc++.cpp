#include <iostream>
using namespace std;
class Animal {
public:
    virtual void move() {
        cout << "Animal moves" << endl;
    }
};
class Fish : public Animal {
public:
    void move() override {
        cout << "Fish swims" << endl;
    }
};
class Bird : public Animal {
public:
    void move() override {
        cout << "Bird flies" << endl;
    }
};

int main() {
Animal* ob;
Fish ob1;
Bird ob2;

ob=&ob1;
ob->move();
ob=&ob2;

ob->move();

return 0;
}

