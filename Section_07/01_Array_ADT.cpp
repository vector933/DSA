#include <iostream>
#include <stdio.h>
using namespace std;

struct Array{
        int *A;
        int size;
        int length;
};

void append(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr, int index, int x){
   if(index >= 0 && index < arr->length){
    for(int i = arr->length; i > index; i--){
        arr->A[i]=arr->A[i-1];
    }
    arr->A[index]=x;
    arr->length++;
   } 
}

int del(struct Array *arr, int index){
   if(index >= 0 && index < arr->length){
    int x = arr->A[index];
    for (int i = index; i < arr->length-1; i++)
    {
        arr->A[i]=arr->A[i+1];
    }
    arr->length--;
    return x;
   } 
}

void display(struct Array arr){
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
    
}

int main()
{
    struct Array arr;
    int n,i,addno,index,insval;
    printf("Enter the size of an array: ");
    scanf("%d", &arr.size);
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;

    printf("Enter the number of numbers: ");
    scanf("%d",&n);
    printf("Enter all the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr.A[i]);
        arr.length++;
    }
    
    display(arr);

    printf("\nEnter the element to add: ");
    scanf("%d",&addno);
    append(&arr, addno);

    printf("Array after addition:\n");
    display(arr);

    printf("\nEnter the index to insert at (0 to %d): ", arr.length);
    scanf("%d", &index);
    printf("Enter the element to insert: ");
    scanf("%d", &insval);

    insert(&arr, index, insval);

    printf("Array after insertion:\n");
    display(arr);

    printf("\nEnter the index to delete (0 to %d): ", arr.length - 1);
    scanf("%d", &index);

    int deleted = del(&arr, index);
    if (index >= 0 && index <= arr.length)
        printf("Deleted element: %d\n", deleted);
    else
        printf("Invalid index!\n");
        return;  //returning from the function if it is invalid

    printf("Array after deletion:\n");
    display(arr);

    return 0;
}