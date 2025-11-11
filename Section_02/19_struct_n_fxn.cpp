#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int ar(struct rectangle r){
    return r.length*r.breadth;
}

int prmtr(struct rectangle r){
    return 2*(r.length+r.breadth);
}

int main(){
    rectangle r = {0,0};
    cout<<"Enter Length & Breadth: "<<endl;
    cin>>r.length>>r.breadth;

    cout<<"Area: "<<ar(r)<<endl<<"Perimeter: "<<prmtr(r)<<endl;
    return 0;
}