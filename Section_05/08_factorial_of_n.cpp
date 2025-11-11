#include<iostream>
#include<stdio.h>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int Ifact(int n){
    int f = 1;
    if(n==0||n==1)
        return 1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    return f;
}

int main(){
    
    int a;
    cout<<"Enter the the number to find the factorial: ";
    cin>>a;
    cout<<"Factorial through Recursion method: "<<fact(a)<<endl;
    cout<<"Factorial through Iterative method: "<<Ifact(a)<<endl;
    
    return 0;
}