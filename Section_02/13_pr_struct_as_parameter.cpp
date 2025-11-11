#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void fun(struct rectangle *p)
{
    p->length=20;
    cout<<"From function:"<<endl<<"Length "<<p->length<<endl<<"Breadth "<<p->breadth<<endl;
}

int main()
{
    struct rectangle r ={10,5};

    printf("Length %d\nBreadth %d\n", r.length,r.breadth);
    fun(&r);
    printf("After Function:\nLength %d\nBreadth %d\n", r.length,r.breadth);
    return 0;
}