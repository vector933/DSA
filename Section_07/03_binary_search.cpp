#include <iostream>
#include <stdio.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

int BinSearch(struct Array arr, int key)
{
    int l, m, h;
    l = 0;
    h = arr.length - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int RBinSearch(int a[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
            return mid;
        else if (key < a[mid])
            RBinSearch(a, l, mid - 1, key);
        else
            RBinSearch(a, mid + 1, h, key);
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

    printf("\nEnter the value to search for (binary search): ");
    scanf("%d", &key);

    // Iterative Binary Search
    int indexIterative = BinSearch(arr, key);
    if (indexIterative != -1)
        printf("Element %d found at index %d (iterative search).\n", key, indexIterative);
    else
        printf("Element %d not found using iterative binary search.\n", key);

    // Recursive Binary Search
    int indexRecursive = RBinSearch(arr.A, 0, arr.length - 1, key);
    if (indexRecursive != -1)
        printf("Element %d found at index %d (recursive search).\n", key, indexRecursive);
    else
        printf("Element %d not found using recursive binary search.\n", key);

    return 0;
}
