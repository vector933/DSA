#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialise(struct rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r){
    return r.length*r.breadth;
}

void changelength(struct rectangle *r, int l){
    r->length=l;
}

int main(){
    struct rectangle r;
    initialise(&r,10,5);
    cout<<"Area: "<<area(r)<<endl;
    changelength(&r,20);
    cout<<"Area: "<<area(r)<<endl;
}