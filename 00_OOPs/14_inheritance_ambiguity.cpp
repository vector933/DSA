#include <iostream>
using namespace std;

class A {
public:
    void greet() {
        cout << "Hello from A\n";
    }
};

class B {
public:
    void greet() {
        cout << "Hello from B\n";
    }
};

class C : public A, public B {
    // No override of greet()
};

int main() {
    class C obj;

    // obj.greet();   ❌ Ambiguity: compiler doesn't know whether to call A::greet or B::greet
    obj.A::greet();  // Calls greet() from class A
    obj.B::greet();  // Calls greet() from class B

    return 0;
}
