/*This program takes two matrices of order r1*c1 and r2*c2 respectively. 
Then, the program multiplies these two matrices (if possible) and displays it on the screen.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix!" << endl;
    cout << "Rows: ";
    cin >> r1;
    cout << "Columns: ";
    cin >> c1;
    cout << "Enter rows and columns for second matrix!" << endl;
    cout << "Rows: ";
    cin >> r2;
    cout << "Columns: ";
    cin >> c2;

    //If column of first matrix in not equal to row of second matrix, ask the user to enter the size of matrix again.
    while(c1!=r2) {
        cout << "\nColumn of first matrix not equal to row of second matrix!" << endl;
        cout << "Enter rows and columns for first matrix!" << endl;
        cout << "Rows: ";
        cin >> r1;
        cout << "Columns: ";
        cin >> c1;
        cout << "Enter rows and columns for second matrix!" << endl;
        cout << "Rows: ";
        cin >> r2;
        cout << "Columns: ";
        cin >> c2;
    }

    //Storing elements of first matrix.
    cout << "\nEnter elements of matrix 1!" << endl;
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c1; ++j) {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    //Storing elements of second matrix.
    cout << endl << "\nEnter elements of matrix 2!" << endl;
    for(i = 0; i < r2; ++i) {
        for(j = 0; j < c2; ++j) {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }

    //Initializing elements of matrix mult to 0.
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            mult[i][j]=0;
        }
    }

    //Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            for(k = 0; k < c1; ++k) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    //Displaying the multiplication of two matrix.
    cout << "\nOutput Matrix: " << endl;
    for(i = 0; i < r1; ++i) {
        for(j = 0; j < c2; ++j) {
            cout << mult[i][j] << "\t";
            if(j == c2-1) {
                cout << endl;
            }
        }
    }

    askOS();
    return 0;
}