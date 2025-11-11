#include <iostream>

using namespace std;

// void swap(int x, int y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }


// int main()
// {
//     int a = 10, b = 15;
//     cout<<"Initial value of A and B are: "<<a<<" and "<<b<<endl;
//     swap(a,b);
//     cout<<"After SWAP... value of A and B are: "<<a<<" and "<<b<<endl;
//     return 0;
// }


// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }


// int main()
// {
//     int a = 10, b = 15;
//     cout<<"Initial value of A and B are: "<<a<<" and "<<b<<endl;
//     swap(&a,&b);
//     cout<<"After SWAP... value of A and B are: "<<a<<" and "<<b<<endl;
//     return 0;
// }



void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}


int main()
{
    int a = 10, b = 15;
    cout<<"Initial value of A and B are: "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"After SWAP... value of A and B are: "<<a<<" and "<<b<<endl;
    return 0;
}