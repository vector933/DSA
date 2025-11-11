#include <iostream>
#include <stdio.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

int linearSearch(struct Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int linearSearchTransposition(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

int linearSearchMoveToFront(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}

void display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct Array arr;
    int n, i, key;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    printf("Enter all the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
        arr.length++;
    }

    display(arr);

    printf("\nEnter the value to search for: ");
    scanf("%d", &key);

    int r1 = linearSearch(arr, key);

    if (r1 != -1)
        printf("\nElement %d found at index %d.\n", key, r1);
    else
        printf("\nElement %d not found in array.\n", key);

    printf("Array after normal search:\n");
    display(arr);

    int r2 = linearSearchTransposition(&arr, key);

    if (r2 != -1)
        printf("\nElement %d found at index %d.\n", key, r2);
    else
        printf("\nElement %d not found in array.\n", key);

    printf("Array after transposition:\n");
    display(arr);

    int r3 = linearSearchMoveToFront(&arr, key);

    if (r3 != -1)
        printf("\nElement %d found at index %d.\n", key, r3);
    else
        printf("\nElement %d not found in array.\n", key);

    printf("Array after (potentially moved-to-front):\n");
    display(arr);

    return 0;
}
