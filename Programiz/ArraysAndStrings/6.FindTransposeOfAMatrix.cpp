/*In this program, user is asked to entered the number of rows and columns. 
The value of rows and columns should be less than 10 in this program.
Then, the user is asked to enter elements of the matrix.
The program computes the transpose of the matrix and displays it on the screen.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int a[10][10], transpose[10][10], row, column;

    cout << "Enter rows and columns of matrix!" << endl;
    cout << "Rows: ";
    cin >> row;
    cout << "Columns: ";
    cin >> column;
    cout << "\nEnter elements of matrix!" << endl;

    //Storing matrix elements
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < column; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    //Printing the a matrix
    cout << "\nEntered Matrix: " << endl;
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < column; ++j) {
            cout << a[i][j] << "\t";
            if(j == column - 1) {
                cout << endl;
            }
        }
    }

    //Computing transpose of the matrix
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < column; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    //Printing the transpose
    cout << "\nTranspose of Matrix: " << endl;
    for(int i = 0; i < column; ++i) {
        for(int j = 0; j < row; ++j) {
            cout << transpose[i][j] << "\t";
            if(j == row - 1) {
                cout << endl;
            }
        }
    }

    askOS();
    return 0;
}
