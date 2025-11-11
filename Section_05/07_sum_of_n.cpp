#include<iostream>
#include<stdio.h>
using namespace std;

int sum(int n){
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

int Isum(int n){
    int s=0;
    for(int i=1; i<=n; i++)
        s += i;
    return s;
}

int Msum(int n){
    return n*(n+1)/2;
}

int main(){
    
    int a;
    cout<<"Enter the value to find it's sum from 1: ";
    cin>>a;
    cout<<"Sum through Recursion method: "<<sum(a)<<endl;
    cout<<"Sum through Iterative method: "<<Isum(a)<<endl;
    cout<<"Sum through Mathematical formula method: "<<Msum(a)<<endl;
    return 0;
}