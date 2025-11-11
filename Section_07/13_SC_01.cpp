#include <iostream>
#include <stdio.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

int missEl(struct Array arr)
{
    int h = arr.A[arr.length - 1];
    int s = (h * (h + 1)) / 2;
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    int diff = s - sum;
    return diff;
}

int missEls(struct Array arr);

int main()
{
    int i;

    // Array 1
    struct Array arr1;
    arr1.size = 10;
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    arr1.A[0] = 1;
    arr1.A[1] = 2;
    arr1.A[2] = 3;
    arr1.A[3] = 4;
    arr1.A[4] = 5;
    arr1.A[5] = 6;
    arr1.A[6] = 8;
    arr1.A[7] = 9;
    arr1.A[8] = 10;
    arr1.A[9] = 11;
    arr1.length = 10;
    printf("Array 1 elements: ");
    display(arr1);
    printf("\n");
    printf("Missing Element element: %d",missEl(arr1));
    printf("\n\n");

    // Array 2
    struct Array arr2;
    arr2.size = 10;
    arr2.A = (int *)malloc(arr2.size * sizeof(int));
    arr2.A[0] = 6;
    arr2.A[1] = 7;
    arr2.A[2] = 8;
    arr2.A[3] = 9;
    arr2.A[4] = 10;
    arr2.A[5] = 11;
    arr2.A[6] = 13;
    arr2.A[7] = 14;
    arr2.A[8] = 15;
    arr2.A[9] = 16;
    arr2.A[10] = 17;
    arr2.length = 11;
    printf("Array 2 elements: ");
    display(arr2);
    printf("\n\n");

    // Array 3
    struct Array arr3;
    arr3.size = 9;
    arr3.A = (int *)malloc(arr3.size * sizeof(int));
    arr3.A[0] = 21;
    arr3.A[1] = 22;
    arr3.A[2] = 23;
    arr3.A[3] = 25;
    arr3.A[4] = 26;
    arr3.A[5] = 27;
    arr3.A[6] = 28;
    arr3.A[7] = 29;
    arr3.A[8] = 30;
    arr3.length = 9;
    printf("Array 3 elements: ");
    display(arr3);
    printf("\n\n");

    // Array 4
    struct Array arr4;
    arr4.size = 6;
    arr4.A = (int *)malloc(arr4.size * sizeof(int));
    arr4.A[0] = 31;
    arr4.A[1] = 32;
    arr4.A[2] = 33;
    arr4.A[3] = 34;
    arr4.A[4] = 36;
    arr4.A[5] = 37;
    arr4.length = 6;
    printf("Array 4 elements: ");
    display(arr4);
    printf("\n\n");

    // Array 5
    struct Array arr5;
    arr5.size = 7;
    arr5.A = (int *)malloc(arr5.size * sizeof(int));
    arr5.A[0] = 101;
    arr5.A[1] = 102;
    arr5.A[2] = 103;
    arr5.A[3] = 105;
    arr5.A[4] = 106;
    arr5.A[5] = 108;
    arr5.A[6] = 109;
    arr5.length = 7;
    printf("Array 5 elements: ");
    display(arr5);
    printf("\n");

    return 0;
}
