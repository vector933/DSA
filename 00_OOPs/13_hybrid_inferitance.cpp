#include <iostream>
using namespace std;

// Base class
class Person {
public:
    void showPerson() {
        cout << "I am a person.\n";
    }
};

// Intermediate class 1 (Single Inheritance)
class Student : public Person {
public:
    void showStudent() {
        cout << "I am a student.\n";
    }
};

// Intermediate class 2 (Independent)
class Employee {
public:
    void showEmployee() {
        cout << "I am an employee.\n";
    }
};

// Derived class (Multiple + Multilevel Inheritance)
class TeachingAssistant : public Student, public Employee {
public:
    void showTA() {
        cout << "I am a teaching assistant.\n";
    }
};

int main() {

    // Hybrid Inheritance: A combination of two or more types of inheritance.
    TeachingAssistant ta;
    ta.showPerson();     // From Person (via Student)
    ta.showStudent();    // From Student
    ta.showEmployee();   // From Employee
    ta.showTA();         // Own method

    return 0;
}
