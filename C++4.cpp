//23BCE7546

#include <iostream>
using namespace std;

class Print {
public:

void show(int i) {
cout << "Integer: " << i << endl;
}

void show(double d) {
cout << "Double: " << d << endl;
}

void show(string s) {
cout << "String: " << s << endl;
}
};
int main() {
Print p;
p.show(10);
p.show(3.14);
p.show("Hello");
return 0;
}
