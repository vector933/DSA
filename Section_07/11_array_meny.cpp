#include <iostream>
#include <stdio.h>
#include <stdlib.h>  // for malloc, free
using namespace std;

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    printf("Elements are: ");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void Insert(struct Array *arr, int index, int x) {
    if (index >= 0 && index <= arr->length && arr->length < arr->size) {
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index) {
    int x = 0;
    if (index >= 0 && index < arr->length) {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return x;
    }
    return 0;
}

int LinearSearch(struct Array *arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (key == arr->A[i])
            return i;
    }
    return -1;
}

int Sum(struct Array arr) {
    int s = 0;
    for (int i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s;
}

int main() {
    struct Array arr1;
    int ch;
    int x, index;

    printf("Enter Size of Array: ");
    scanf("%d", &arr1.size);
    arr1.A = (int *)malloc(arr1.size * sizeof(int));
    arr1.length = 0;

    do {
        printf("\n\nMenu\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Sum\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter an element and index: ");
                scanf("%d%d", &x, &index);
                Insert(&arr1, index, x);
                break;
            case 2:
                printf("Enter index: ");
                scanf("%d", &index);
                x = Delete(&arr1, index);
                printf("Deleted Element is %d\n", x);
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &x);
                index = LinearSearch(&arr1, x);
                if (index != -1)
                    printf("Element found at index %d\n", index);
                else
                    printf("Element not found\n");
                break;
            case 4:
                printf("Sum is %d\n", Sum(arr1));
                break;
            case 5:
                Display(arr1);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, try again\n");
        }
    } while (ch < 6);

    free(arr1.A); // Free allocated memory before exiting
    return 0;
}
