#include<iostream>
#include<stdio.h>
using namespace std;

int ar(int l,int b){
    return l*b;
}

int prmtr(int l, int b){
    return 2*(l+b);
}

int main(){
    int length=0,breadth=0;
    
    cout<<"Enter Length & Breadth: "<<endl;
    cin>>length>>breadth;

    int area = ar(length,breadth);
    int perimeter = prmtr(length,breadth);

    cout<<"Area: "<<area<<endl<<"Perimeter: "<<perimeter<<endl;
    return 0;
}