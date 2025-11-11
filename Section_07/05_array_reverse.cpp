#include <iostream>
#include <stdio.h>
using namespace std;

struct Array{
    int *A;
    int size;
    int length;
};

void display(struct Array arr){
    for(int i = 0; i<arr.length; i++)
        printf("%d ",arr.A[i]);
}

void reverse(struct Array *arr){
    int temp,i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

void reversel(struct Array *arr){
    int i,j;
    int *b;
    b = (int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;j++,i--)
        b[j]=arr->A[i];
    for(i=0;i<arr->length;i++){
        arr->A[i]=b[i];
    }
}

int main()
{

    int n,i;
    struct Array arr;

    // printf("Enter the size of array: ");
    // scanf("%d",&arr.size);
    arr.size = 10;

    arr.A=(int *)malloc(arr.size*sizeof(int));

    // printf("Enter the number of numbers: ");
    // scanf("%d",&n);
    n = 7;

    arr.length=0;

    // printf("Enter the elements:\n");
    // for(i=0;i<=n;i++)
    //     scanf("%d",arr.A[i]);

    arr.A[0]=1;
    arr.A[1]=5;
    arr.A[2]=9;
    arr.A[3]=3;
    arr.A[4]=10;
    arr.A[5]=15;
    arr.A[6]=6;
    arr.length=7;

    
    display(arr);

    reverse(&arr);

    printf("\n");
    printf("Reverse by Method 1:\n");
    display(arr);

    reversel(&arr);

    printf("\n");
    printf("Again reverse by Method 2:\n");
    display(arr);

    return 0;
}