#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Function to calculate perimeter
    int perimeter() {
        return 2 * (length + breadth);
    }

    // Function to set length
    void setLength(int l) {
        length = l;
    }

    // Function to set breadth
    void setBreadth(int b) {
        breadth = b;
    }

    // Function to get length
    int getLength() {
        return length;
    }

    // Function to get breadth
    int getBreadth() {
        return breadth;
    }

    // Destructor
    ~Rectangle() {
        cout<<"Destructor";
    }
};

int main() {
    // Creating an object with parameterized constructor
    Rectangle r(10, 5);

    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;

    return 0;
} // destructor is displayed bcz one the main function end.... the object is automatically destroyed.
