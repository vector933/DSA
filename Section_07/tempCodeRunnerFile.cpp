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

struct Array *un1(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    arr3->length = arr2->length + arr1->length;

    for (i = 0; i < arr1->length; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }

    for (i = 0; i < arr2->length; i++)
    {
        int found = 0;
        for (j = 0; j < arr1->length; j++)
        {
            if (arr2->A[i] == arr1->A[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
            arr3->A[k++] = arr2->A[i];
    }

    arr3->length = k;
    arr3->size = arr3->length;

    return arr3;
}

struct Array *un2(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;

    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    arr3->length = arr2->length + arr1->length;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr1->A[i] > arr2->A[j])
        {
            arr3->A[k++] = arr2->A[j++];
        }
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];

    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];

    arr3->length = k;
    arr3->size = arr3->length;

    return arr3;
}

int main()
{

    int n, i;
    struct Array a1;
    struct Array a2;
    struct Array *arr3;
    struct Array *arr4;

    // printf("Enter the size of array: ");
    // scanf("%d",&arr.size);
    a1.size = 5;
    a2.size = 5;

    a1.A = (int *)malloc(a1.size * sizeof(int));
    a2.A = (int *)malloc(a2.size * sizeof(int));

    // printf("Enter the number of numbers: ");
    // scanf("%d",&n);
    n = 5;

    a1.length = 0;

    // printf("Enter the elements:\n");
    // for(i=0;i<=n;i++)
    //     scanf("%d",arr.A[i]);

    a1.A[0] = 3;
    a1.A[1] = 4;
    a1.A[2] = 5;
    a1.A[3] = 6;
    a1.A[4] = 10;
    a1.length = 5;

    a2.A[0] = 2;
    a2.A[1] = 4;
    a2.A[2] = 5;
    a2.A[3] = 7;
    a2.A[4] = 12;
    a2.length = 5;

    printf("Array 1:\n");
    display(a1);

    printf("\nArray 2:\n");
    display(a2);

    arr3 = un1(&a1, &a2);
    printf("\nMerged Array 1:\n");
    display(*arr3);

    arr4 = un2(&a1, &a2);
    printf("\nMerged Array 2:\n");
    display(*arr4);

    return 0;
}