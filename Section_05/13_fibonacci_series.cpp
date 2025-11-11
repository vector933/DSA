#include <iostream>
#include <stdio.h>
using namespace std;

int F[10];

void Ifib(int n){
    int t1=0, t2=1, s=0;
    if(n==1){
        cout<<"0 ";
    }else if(n==2){
        cout<<"0 1 ";
    }else{
        cout<<"0 1 ";
        for(int i = 3; i<=n; i++){
            s=t1+t2;
            t1=t2;
            t2=s;
            cout<<s<<" ";
        }
    }
}

void fibHelper(int n, int a, int b) {
    if (n == 0) return; 
    cout << a << " ";
    fibHelper(n - 1, b, a + b); 
}

void fib(int n) {
    fibHelper(n, 0, 1); 
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
    } else {
        cout<<"Fibonacci Series through Iteration:"<<endl;
        Ifib(n);
        cout<<endl<<"Fibonacci Series through Recursion:"<<endl;
        fib(n);
    }
    return 0;
}
