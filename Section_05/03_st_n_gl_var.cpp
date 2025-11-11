#include<iostream>
#include<stdio.h>
using namespace std;

// int fun(int n){
//     if(n>0){
//         return fun(n-1)+n;
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     cout<<fun(a);
//     return 0;
// }


// int fun(int n){
//     static int x=0;
//     if(n>0){
//         x++;
//         return fun(n-1)+x;
//     }
//     return 0;
// }

// int main(){
//     int a=5;
//     cout<<fun(a);
//     return 0;
// }


int x=0;
int fun(int n){
    // static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int a=5;
    cout<<fun(a)<<endl;

    cout<<fun(a); //will give output 50 bcz x will be 25 after the prev fun(a)
    return 0;
}