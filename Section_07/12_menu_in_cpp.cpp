#include <iostream>
#include <stdio.h>
#include <stdlib.h>  // for malloc, free
using namespace std;

class Array {
private:
    int *A;
    int size;
    int length;
public:
    Array(){
        size = 10;
        length = 0;
        A = new int[size];
    }
    Array(int sz){
        size = sz;
        length = 0;
        A = new int[size]; 
    }
    ~Array(){
        delete []A;
    }

void Display() {
    printf("Elements are: ");
    for (int i = 0; i < length; i++)
        printf("%d ", A[i]);
    printf("\n");
}

void Insert(int index, int x) {
    if (index >= 0 && index <= length && length < size) {
        for (int i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}

int Delete(int index) {
    int x = 0;
    if (index >= 0 && index < length) {
        x = A[index];
        for (int i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
        return x;
    }
    return 0;
}

int LinearSearch(int key) {
    for (int i = 0; i < length; i++) {
        if (key == A[i])
            return i;
    }
    return -1;
}

int Sum() {
    int s = 0;
    for (int i = 0; i < length; i++)
        s += A[i];
    return s;
}
};
int main() {
    Array *arr1;
    int ch,sz;
    int x, index;

    printf("Enter Size of Array: ");
    scanf("%d", &sz);
    arr1 = new Array(sz);

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
                arr1->Insert(index, x);
                break;
            case 2:
                printf("Enter index: ");
                scanf("%d", &index);
                x = arr1->Delete(index);
                printf("Deleted Element is %d\n", x);
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &x);
                index = arr1->LinearSearch(x);
                if (index != -1)
                    printf("Element found at index %d\n", index);
                else
                    printf("Element not found\n");
                break;
            case 4:
                printf("Sum is %d\n", arr1->Sum());
                break;
            case 5:
                arr1->Display();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, try again\n");
        }
    } while (ch < 6);

    delete arr1; // Free allocated memory before exiting
    return 0;
}
