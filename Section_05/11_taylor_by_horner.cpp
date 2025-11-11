#include <iostream>
#include <stdio.h>
using namespace std;

// double Ie(double x, double n){
//     double s=1;
//     for( ; n>0; n--){
//         s = 1 + (x/n)*s;
//     }
//     return s;
// }

double Ie(double x, double n){
    double s=1,num=1,den=1;
    for(int i=1;i<=n;i++){
        num *= x;
        den *= i;
        s = s + num/den;
    }
    return s;
}

double e(double x, double n){
    static double s = 1;
    if(n==0)
        return s;
    else{
        s = 1+(x/n)*s;
        return e(x,n-1);
    }
}

int main()
{

    double a,n;
    cout << "Enter the the number to find it's exponential: ";
    cin >>a;
    cout<<"Enter the number of terms till you want to expand: ";
    cin >>n;
    cout << "Exponential value through Recursion: " << e(a, n)<<endl;
    cout << "Exponential value through Iteration: " << Ie(a, n)<<endl;

    return 0;
}

