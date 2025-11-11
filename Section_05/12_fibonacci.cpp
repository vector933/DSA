#include <iostream>
#include <stdio.h>
using namespace std;

int Ifib(int n)
{
    int t1 = 0, t2 = 1, s = 0;
    if (n <= 2)
        return n-1;
    for (int i = 3; i <= n; i++)
    {
        s = t1 + t2;
        t1 = t2;
        t2 = s;
    }
    return s;
}

int fib(int n)
{
    if (n==1||n==2)
        return n-1;
    return fib(n - 2) + fib(n - 1);
}

int F[10];
int mfib(int n)
{
    if (n <= 2)
    {
        F[n] = n-1;
        return F[n];
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = mfib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = mfib(n - 1);
        F[n] = F[n - 2] + F[n - 1];
        return F[n];
    }
}

int main()
{
    int i;
    for (i = 1; i <= 10; i++)
        F[i] = -1;

    int n;
    cout << "Enter the positin of term in Fibonacci Sreies: ";
    cin >> n;
    if (n <= 0)
    {
        cout << "Please enter a positive number." << endl;
    }
    else
    {
        cout << "Fibonacci Term through Iteration:"<<Ifib(n)<< endl;
        cout << "Fibonacci Term through Recursion:" <<fib(n)<< endl;
        cout << "Fibonacci Term through Memorisation:" <<mfib(n)<< endl;
    }
    return 0;
}