#include<iostream>

using namespace std;

int main()
{
    int i;
    int a[10]={1,2,4,8,16,32,64,128};
    cout<<sizeof(a)<<endl;
    // cout<<a[1]<<endl;
    // cout<<a[3]<<endl;

    for(i=0; i<10; i++){
        cout<<a[i];
        if(i<9){
            cout<<' ';
        }
    }



    return 0;
}