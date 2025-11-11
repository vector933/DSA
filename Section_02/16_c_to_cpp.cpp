#include<iostream>
#include<stdio.h>
using namespace std;

// class Rectangle{
//     private:      //by deafault also.... it will be private
//         int length;
//         int breadth;
//     public:      //by deafault it will be private
//         Rectangle(int l,int b){
//             length = l;
//             breadth = b;
//         }

//         int area(){
//             return length*breadth;
//         }

//         void changelength(int l){
//             length = l;
//         }
// };

// int main(){
//     int l,b,c;
//     cout<<"Enter Length & Breadth: "<<endl;
//     cin>>l>>b;
//     Rectangle r(l,b);
//     cout<<"Area: "<<r.area()<<endl;
//     cout<<"Enter Length to change: "<<endl;
//     cin>>c;
//     r.changelength(c);
//     cout<<"Area: "<<r.area()<<endl;
// }

struct Rectangle{
    int length;
    int breadth;

    void initialise(int l,int b){
        length = l;
        breadth = b;
    }

    int area(){
        return length*breadth;
    }

    void changelength(int l){
        length = l;
    }
};

int main(){
    int l,b,c;
    cout<<"Enter Length & Breadth: "<<endl;
    cin>>l>>b;
    Rectangle r;
    r.initialise(l,b);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Enter Length to change: "<<endl;
    cin>>c;
    r.changelength(c);
    cout<<"Area: "<<r.area()<<endl;
}