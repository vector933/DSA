#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    printf("\n");

    int *B[3];
    B[0]= new int[4];
    B[1]= new int[4];
    B[2]= new int[4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",B[i][j]);
        printf("\n");
    }
    printf("\n");

    int **C = new int *[3];
    C[0]= new int[4];
    C[1]= new int[4];
    C[2]= new int[4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}