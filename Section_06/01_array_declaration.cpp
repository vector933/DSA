#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[5];
    int b[5]={1,2,3,4,5};
    int c[10]={2,4,6};
    int d[5]={0};
    int e[]={1,5,9,4,0,7};
    
    for (int i = 0; i < 5; i++)
    {
        printf("%u \n", &a[i]);
    }
    

    return 0;
}
