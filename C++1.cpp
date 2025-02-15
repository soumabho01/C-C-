//23BCE7546
#include <iostream>
using namespace std;
class Calculator {
public:
	
int add(int a, int b) {
return a + b;
}
int add(int a, int b, int c) {
return a + b + c;
}

float add(float a, float b) {
return a + b;
}

};

int main() {
Calculator calc;
cout << "Sum of 3 and 4: " << calc.add(3, 4) << endl;
cout << "Sum of 3, 4 and 5: " << calc.add(3, 4, 5) << endl;
cout << "Sum of 2.5 and 3.5: " << calc.add(2.5f, 3.5f) << endl;
return 0;
}
