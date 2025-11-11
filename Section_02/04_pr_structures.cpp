#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
};

int main()
{
    rectangle r1 = {10, 5};
    cout << sizeof(r1) << endl;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    cout << r1.x << endl;
    return 0;
}