#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle* fun()
{
    struct rectangle *p;
    p = new rectangle; //allocation in c++

    p->length = 15;
    p->breadth = 7;
    return p;

};

int main()
{
    struct rectangle *p = fun();
    cout<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth<<endl;
    return 0;
}