#include <iostream>
#include <stdio.h>
using namespace std;

class Student{
    private:
        string name;
        int age;
        int height;
    
    public:
        int getage(){
            return this->age;
        }
};

int main()
{
    Student First;
    cout << "Sab sahi chalra hai" << endl;
    return 0;
}