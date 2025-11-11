#include <iostream>
using namespace std;

class Printer {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }

    void print(double d) {
        cout << "Printing double: " << d << endl;
    }

    void print(const char* s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    Printer p;
    p.print(42);           // Calls print(int)
    p.print(3.14);         // Calls print(double)
    p.print("Hello C++");  // Calls print(const char*)
    return 0;
}
