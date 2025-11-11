#include<iostream>

using namespace std;


int fun(int A[])
{
    cout<<"Taking the size of pointer by machine: "<<sizeof(A)<<endl;
    cout<<"sizeof(ptrA)/sizeof(int)= "<<sizeof(A)/sizeof(int)<<endl;  // 4/4=1
    return 0;
}


int main()
{
    int A[]={2,4,6,8,10};
    cout<<"sizeof(A)/sizeof(int)= "<<sizeof(A)/sizeof(int)<<endl;
    int n = 5;

    for(int x:A)
        cout<<x<<" ";
    cout<<endl;
    fun(A);
    return 0;
}