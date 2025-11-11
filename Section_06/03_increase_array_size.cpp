#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int *p,*q;
    int i;

    p = new int[5];
    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", p[i]);
    }

    q = new int[10];

    for (i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", q[i]);
    }

    free(p);
    p=q;
    q=NULL;

    printf("\n");
    
     for (i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }


    return 0;
}