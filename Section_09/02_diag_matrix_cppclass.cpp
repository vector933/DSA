#include <iostream>
#include <stdio.h>
using namespace std;

class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(){
            int n = 2;
            A = new int[2];
        }
        Diagonal(int n){
            this->n=n;
            A = new int[n];
        }
        void set(int i, int j, int x){
            if(i==j){
                this->A[i-1]=x;
            }
        }
        int get(int i, int j){
            if(i==j)
                return A[i-1];
            else
                return 0;
        }
        void display(){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==j)
                        cout<<A[i]<<" ";
                    else
                        cout<<"0 ";
                }
                cout<<endl;
            }
        }
        ~Diagonal(){
            delete []A;
        }
};

int main()
{
    Diagonal d(4);
    d.set(1,1,5);
    d.set(2,2,9);
    d.set(3,3,6);
    d.set(4,4,2);
    d.display();
    return 0;
}