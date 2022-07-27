/*In this program, user is asked to entered the number of rows r and columns c. 
The value of r and c should be less than 100 in this program.
The user is asked to enter elements of two matrices (of order r*c).
Then, the program adds these two matrices, saves it in another matrix (two-dimensional array) and displays it on the screen.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;

    cout << "Enter number of rows (between 1 and 100): ";
    cin >> r;
    cout << "Enter number of columns (between 1 and 100): ";
    cin >> c;
    cout << "\nEnter elements of 1st matrix!" << endl;

    //Storing elements of first matrix entered by user.
    for(i = 0; i < r; ++i) {
       for(j = 0; j < c; ++j) {
           cout << "Enter element a" << i + 1 << j + 1 << ": ";
           cin >> a[i][j];
       }
    }


    //Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix!" << endl;
    for(i = 0; i < r; ++i) {
       for(j = 0; j < c; ++j) {
           cout << "Enter element b" << i + 1 << j + 1 << ": ";
           cin >> b[i][j];
       }
    }

    //Adding Two matrices
    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }   
    }


    //Displaying the resultant sum matrix.
    cout << "\nSum of two matrix is: " << endl;
    for(i = 0; i < r; ++i) {
        for(j = 0; j < c; ++j) {
            cout << sum[i][j] << "\t";
            if(j == c - 1) {
                cout << endl;
            }
        }
    }

    askOS();
    return 0;
}