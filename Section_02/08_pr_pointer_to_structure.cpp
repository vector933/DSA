#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct rectangle r = {10,5}; //you can skip struct in c++
    cout<<"Length and Breadth are:"<<endl<<r.length<<endl<<r.breadth<<endl;

    struct rectangle *p=&r;
    cout<<p->length<<endl;
    p->length=15;
    p->breadth=7;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    //for dynamic allocation
    //struct rectangle *p=(struct rectangle *)malloc(sizeof(struct rectangle));
    //or
    //p = new rectangle;
    //p->length=15;
    //p->breadth=7;
    //cout<<p->length<<endl;
    //cout<<p->breadth<<endl;
    //free(p);
}