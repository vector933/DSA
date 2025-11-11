#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int *p;
    p = (int *)malloc(5*sizeof(int));
    // for C++ -> p = new int[5];
    printf("%d", sizeof(p));
    delete [ ] p;   //for C++
    free(p);    //for C
}