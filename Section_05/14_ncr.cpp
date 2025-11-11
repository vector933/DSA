#include <iostream>
#include <stdio.h>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

int c(int n, int r){
    int t1=fact(n);
    int t2=fact(r);
    int t3=fact(n-r);
    return t1/(t2*t3);
}

int C(int n, int r){
    if(r==0||n==r)
        return 1;
    return C(n-1,r-1)+C(n-1,r);
}
int main()
{
    int n,r;
    cout<<"Enter the value of n to find nCr: ";
    cin>>n;
    cout<<"Enter the value of r to find nCr: ";
    cin>>r;
    cout<<n<<"C"<<r<<" using factorial function: "<<c(n,r)<<endl;
    cout<<n<<"C"<<r<<" using Pascal Triangle concept: "<<C(n,r);
    return 0;
}