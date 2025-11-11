#include<iostream>
#include<stdio.h>
using namespace std;

int pow1(int m, int n){
    if(n==0)
        return 1;
    return pow1(m,n-1)*m;
}

int pow2(int m, int n){
    if(n==0)
        return 1;
    else if (n%2==0)
    {
        return pow2(m*m,n/2);
    }
    else
    {
        return m*pow2(m*m,(n-1)/2);
    }
}

int main(){

    int a,b;
    cout<<"Enter the the number of a for a^b: ";
    cin>>a;
    cout<<"Enter the the number of b for a^b: ";
    cin>>b;
    cout<<a<<"^"<<b<<" through method 1: "<<pow1(a,b)<<endl;
    cout<<a<<"^"<<b<<" through method 2: "<<pow2(a,b)<<endl;
    
    return 0;
}