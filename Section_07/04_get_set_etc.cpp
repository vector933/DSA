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

int get(struct Array arr, int n){
    if(n>=0 && n<arr.length){
        return arr.A[n];
    }else{
        printf("Invalid Index Input");
        return -1;
    }
}

int set(struct Array arr, int n, int x){
    if(n>=0 && n<arr.length){
        arr.A[n] = x;
    }else{
        printf("Invalid Index Input");
        return 0;
    }
}

int max(struct Array arr){
    int max = arr.A[0];
    for(int i = 0; i<arr.length; i++){
        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;
}

int min(struct Array arr){
    int min = arr.A[0];
    for(int i = 0; i<arr.length; i++){
        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct Array arr){
    int total = 0;
    for(int i = 0; i<arr.length; i++){
        total+=arr.A[i];
    }
    return total;
}

float average(struct Array arr){
    int total = 0;
    for(int i = 0; i<arr.length; i++){
        total+=arr.A[i];
    }
    return total/arr.length;
}

int sumtill(struct Array arr, int index){
    if(index<0)
        return 0;
    else
        return sumtill(arr, (index-1))+arr.A[index];
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

    printf("\n6th element: %d",get(arr,5));
    int p=4, q=2;
    printf("\nChanged %dth element to %d",p,q);
    set(arr,p-1,q);
    printf("\nUpdated Elements: ");
    display(arr);
    printf("\nMinimum Value: %d",min(arr));
    printf("\nMaximum Value: %d",max(arr));
    printf("\nSum of all elements: %d",sum(arr));
    printf("\nAverage of all elements: %0.2f",average(arr));
    int m = 4;
    printf("\nSum till %dth elements: %d",m,sumtill(arr,m-1));
    

    return 0;
}