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

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertSort(struct Array *arr, int x){
    if(arr->length<arr->size){
        int i = arr->length-1;
        while(arr->A[i]>x){
            arr->A[i+1] = arr->A[i];
            i--;
        }
        arr->A[i+1]=x;
        arr->length++;
    }
}

bool isSorted(struct Array arr){
    for(int i=0; i<arr.length-1; i++){
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

void arrange(struct Array *arr){
    int i = 0, j = arr->length-1, temp;
    while(i<j){
        while(arr->A[i]<0)

            i++;
        while(arr->A[j]>=0)
            j--;
        if(i<j){
            swap(&arr->A[i],&arr->A[j]);
        }
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

    arr.A[0]=-1;
    arr.A[1]=3;
    arr.A[2]=-5;
    arr.A[3]=9;
    arr.A[4]=-10;
    arr.A[5]=15;
    arr.A[6]=-21;
    arr.length=7;

    
    display(arr);

    // int p=20;
    // insertSort(&arr,p);
    // printf("\nArray after inserting %d:\n",p);
    // display(arr);

    // if(isSorted(arr))
    //     printf("\nArray is in sorted manner");
    // else
    //     printf("\nArray is not in sorted manner");
    
    arrange(&arr);
    printf("\nArray after arranging -ve to left and +ve to right\n");
    display(arr);

    

    return 0;
}