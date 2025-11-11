#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // int a=10;
    // int *p;
    // p= &a;

    // cout<<a<<endl;
    // cout<<*p;
    // return 0;

    int A[5] = {1, 3, 5, 7, 9};
    int *p;
    p = new int[5]; // for c -> p = (int *)malloc(5*sizeof(int))
    if (p == NULL)
    {
        printf("Sufficient memory not allocated\n");
        return 0;
    }
    p = A; // or you can use p = &A[0] for single element

    cout<<"Taking the size of pointer by machine: "<<sizeof(p)<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl; // or use A[i]
    }
    return 0;
}