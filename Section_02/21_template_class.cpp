#include <iostream>
#include <stdio.h>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    return (a + b);
}

template <class T>
T Arithmetic<T>::sub()
{
    return (a - b);
}

int main()
{

    Arithmetic<int> ar(10, 5);

    cout<<"Sum: "<<ar.add()<<endl;

    Arithmetic<float> ar1(1.5,1.2);

    cout << "sum: " << ar1.add()<<endl;

    Arithmetic<char> ar2('A', 'B');

    cout<<"Sum: "<<(int)ar2.add()<<endl; // will give -125 instead of 131 bcz char has range b/w -128 t0 127 and its going beyond this so its it wraps around into the negative range

    return 0;
}