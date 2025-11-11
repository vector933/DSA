#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    int i;

    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4]= 11;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }
    return 0;
}