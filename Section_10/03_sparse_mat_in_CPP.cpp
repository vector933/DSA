#include <iostream>
#include <stdio.h>
using namespace std;

class element
{
public:
    int i;
    int j;
    int x;
};

class sparse
{
private:
    int m;
    int n;
    int num;
    element *e;

public:
    sparse()
    {
        m = n = num = 0;
        e = nullptr;
    }
    ~sparse()
    {
        delete[] e;
    }
    void create()
    {
        cout << "Enter number of rows and columns: ";
        cin >> m >> n;
        cout << "Enter number of non-zero elements: ";
        cin >> num;

        e = new element[num];
        cout << "Enter non-zero elements (row column value):" << endl;
        for (int i = 0; i < num; i++)
        {
            cin >> e[i].i >> e[i].j >> e[i].x;
        }
    }
    void display()
    {
        int k = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (k < num && e[k].i == i && e[k].j == j)
                {
                    cout << e[k++].x << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    sparse s1;
    s1.create();
    s1.display();
    return 0;
}