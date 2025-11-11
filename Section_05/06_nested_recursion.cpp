#include<iostream>
#include<stdio.h>
using namespace std;

int fun(int n){
    if(n>100){
        return n-10;
    }else{
        fun(fun(n+11));
    }
}

int main(){
    
    int a = fun(102);   //it will give 91 till n=101 after that it will give n-10
    cout<<a;
    
    return 0;
}