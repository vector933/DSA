#include <iostream>
#include <stdio.h>
using namespace std;

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    else
    {
        r = e(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}

double pow(double m, double n){
    if(n==0)
        return 1;
    return pow(m,n-1)*m;
}

double fact(double n){
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

double Oe(double x, double n){
    if(n==0)
        return 1;
    else return Oe(x,n-1)+(pow(x,n)/fact(n));
}

int main()
{

    int a,n;
    cout << "Enter the the number to find it's exponential: ";
    cin >>a;
    cout<<"Enter the number of terms till you want to expand: ";
    cin >>n;
    cout << "Exponential value through concept: " << e(a, n)<<endl;
    cout << "Exponential value by Own: " << Oe(a, n);

    return 0;
}


// #include<iostream>
// #include<stdio.h>
// using namespace std;

// double pow(double m, double n){
//     if(n==0)
//         return 1;
//     return pow(m,n-1)*m;
// }

// double fact(double n){
//     if(n==0)
//         return 1;
//     return fact(n-1)*n;
// }

// double Oe(double x, double n){
//     if(n==0)
//         return 1;
//     else return e(x,n-1)+(pow(x,n)/fact(n));
// }

// int main(){

// double a, n;
// cout << "Enter the the number to find it's exponential: ";
// cin >> a;
// cout << endl
//      << "Enter the number of terms till you want to expand: ";
// cin >> n;
// cout << "Exponential value: " << e(a, n);

//     return 0;
// }