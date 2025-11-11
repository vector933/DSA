#include<iostream>

using namespace std;

int * fun(int size)
{
    int *p;
    p = (int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
        {
            p[i] = i+1;
        }
    cout<<"Taking the size of pointer by machine: "<<sizeof(p)<<endl;
    return p;
}

int main()
{
    int *ptr;
    ptr = fun(5);
    for(int i=0;i<5;i++)
        {
            cout<<ptr[i]<<endl;
        }
}


// void fun(int a[], int n){
//     for(int i=0; i<n; i++)
//         a[i]=i+5;
// }

// int main(){
//     int A[5]={7,2,0,5,78};
//     for(int i=0; i<5; i++)
//         cout<<A[i]<<" ";
//     cout<<endl;
//     fun(A,5);
//     for(int i=0; i<5; i++)
//         cout<<A[i]<<" ";
// }