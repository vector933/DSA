#include <iostream>     
#include <stdio.h>     
using namespace std;   

// Class to represent a non-zero element in the sparse matrix
class element {
public:
    int i;  // Row index of the element
    int j;  // Column index of the element
    int x;  // Value of the element
};

// Class to represent a sparse matrix
class sparse {
private:
    int m;       // Number of rows
    int n;       // Number of columns
    int num;     // Number of non-zero elements
    element *e;  // Pointer to array of non-zero elements

public:
    // Default constructor to initialize an empty matrix
    sparse() {
        m = n = num = 0;
        e = nullptr;
    }

    // Parameterized constructor to initialize matrix with given size and element count
    sparse(int rows, int cols, int count) {
        m = rows;
        n = cols;
        num = count;
        e = new element[num];  // Allocate memory for non-zero elements
    }

    // Destructor to release allocated memory
    ~sparse() {
        delete[] e;
    }

    // Function to take matrix input from the user
    void create() {
        cout << "Enter number of rows and columns: ";
        cin >> m >> n;  // Input matrix dimensions

        cout << "Enter number of non-zero elements: ";
        cin >> num;     // Input number of non-zero elements

        e = new element[num];  // Allocate memory for non-zero elements

        cout << "Enter non-zero elements (row column value):" << endl;
        for (int i = 0; i < num; i++) {
            cin >> e[i].i >> e[i].j >> e[i].x;  // Input each non-zero element
        }
    }

    // Function to display the full matrix including zeros
    void display() {
        int k = 0;  // Index to track non-zero elements
        for (int i = 0; i < m; i++) {           // Loop through rows
            for (int j = 0; j < n; j++) {       // Loop through columns
                if (k < num && e[k].i == i && e[k].j == j)
                    cout << e[k++].x << " ";    // Print non-zero element
                else
                    cout << "0 ";               // Print zero
            }
            cout << endl;                       // Newline after each row
        }
    }

    // Function to add two sparse matrices and return the result
    sparse add(sparse &s) {
        if (m != s.m || n != s.n) {             // Check if dimensions match
            cout << "Matrix dimensions do not match.\n";
            return sparse();                    // Return empty matrix if mismatch
        }

        sparse result(m, n, num + s.num);       // Create result matrix with max possible size
        int i = 0, j = 0, k = 0;                // Indices for traversal

        // Merge elements from both matrices
        while (i < num && j < s.num) {
            if (e[i].i < s.e[j].i || (e[i].i == s.e[j].i && e[i].j < s.e[j].j))
                result.e[k++] = e[i++];         // Copy element from first matrix
            else if (s.e[j].i < e[i].i || (s.e[j].i == e[i].i && s.e[j].j < e[i].j))
                result.e[k++] = s.e[j++];       // Copy element from second matrix
            else {
                result.e[k] = e[i];             // Same position: add values
                result.e[k++].x += s.e[j++].x;
                i++;
            }
        }

        // Copy remaining elements from first matrix
        while (i < num)
            result.e[k++] = e[i++];

        // Copy remaining elements from second matrix
        while (j < s.num)
            result.e[k++] = s.e[j++];

        result.num = k;                         // Update actual number of non-zero elements
        return result;                          // Return the result matrix
    }
};

int main() {
    sparse s1, s2;                               // Create two sparse matrix objects

    cout << "Enter first matrix:\n";
    s1.create();                                 // Input first matrix

    cout << "Enter second matrix:\n";
    s2.create();                                 // Input second matrix

    sparse sum = s1.add(s2);                     // Add matrices and store result

    cout << "\nFirst Matrix:\n";
    s1.display();                                // Display first matrix

    cout << "\nSecond Matrix:\n";
    s2.display();                                // Display second matrix

    cout << "\nSum Matrix:\n";
    sum.display();                               // Display result matrix

    return 0;                                     // End of program
}