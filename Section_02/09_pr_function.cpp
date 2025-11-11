#include<iostream>

using namespace std;

int add(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{
    int x,y,z;
    cout<<"Enter the a value:"<<endl;
    cin>>x;
    cout<<"Enter the b value:"<<endl;
    cin>>y;
    z = add(x,y);
    cout<<"The addition value of a and b is: "<<z<<endl;
    return 0;
}