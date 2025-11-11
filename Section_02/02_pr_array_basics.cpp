#include<iostream>

using namespace std;

int main()
{
    int i;
    int a[10]={1,2,4,8,16,32,64,128};
    cout<<"size of array: "<<sizeof(a)<<endl<<endl;
   
   for(int x:a){
    cout<<x<<endl;
   }


    return 0;
}