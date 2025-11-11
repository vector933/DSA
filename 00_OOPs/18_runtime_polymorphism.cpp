#include <iostream>
#include <stdio.h>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks\n";
    }
};

void makeSound(Animal* a) {
    a->sound();  // Calls Dog's sound() if passed a Dog*
}


int main()
{

    Dog d1;
    d1.sound();
    makeSound(&d1);
    return 0;
}