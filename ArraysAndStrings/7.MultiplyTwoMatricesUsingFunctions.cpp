/*This program asks user to enter the size of the matrix (rows and columns).
Then, it asks the user to enter the elements of two matrices and finally it multiplies two matrix and displays the result.
To perform this task three functions are made:
1.To take matrix elements from user
2.To multiply two matrix
3.To display the resultant matrix after multiplication*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
void display(int mult[][10], int rowFirst, int columnSecond);

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

    cout << "Enter rows and column for first matrix!" << endl;
    cout << "Rows: ";
    cin >> rowFirst;
    cout << "Columns: ";
    cin >> columnFirst;
    cout << "Enter rows and column for second matrix!" << endl;
    cout << "Rows: ";
    cin >> rowSecond;
    cout << "Columns: ";
    cin >> columnSecond;

	// If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
	while(columnFirst != rowSecond) {
        cout << "\nColumn of first matrix not equal to row of second!" << endl;
        cout << "Enter rows and column for first matrix!" << endl;
        cout << "Rows: ";
        cin >> rowFirst;
        cout << "Columns: ";
        cin >> columnFirst;
        cout << "Enter rows and column for second matrix!" << endl;
        cout << "Rows: ";
        cin >> rowSecond;
        cout << "Columns: ";
        cin >> columnSecond;
	}

	//Function to take matrices data
    enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);

    //Function to multiply two matrices.
    multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);

    //Function to display resultant matrix after multiplication.
    display(mult, rowFirst, columnSecond);

    askOS();
    return 0;
}

void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    int i, j;

    cout << "\nEnter elements of matrix 1!" << endl;
    for(i = 0; i < rowFirst; ++i) {
        for(j = 0; j < columnFirst; ++j) {
            cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
            cin >> firstMatrix[i][j];
        }
    }

    cout << "\nEnter elements of matrix 2!" << endl;
    for(i = 0; i < rowSecond; ++i) {
        for(j = 0; j < columnSecond; ++j) {
            cout << "Enter elements b" << i + 1 << j + 1 << ": ";
            cin >> secondMatrix[i][j];
        }
    }
}

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
	int i, j, k;

	//Initializing elements of matrix mult to 0.
	for(i = 0; i < rowFirst; ++i) {
		for(j = 0; j < columnSecond; ++j) {
			mult[i][j] = 0;
		}
	}

	//Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for(i = 0; i < rowFirst; ++i) {
		for(j = 0; j < columnSecond; ++j) {
			for(k = 0; k < columnFirst; ++k) {
				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
}

void display(int mult[][10], int rowFirst, int columnSecond) {
    int i, j;

    cout << "\nOutput Matrix:" << endl;
    for(i = 0; i < rowFirst; ++i) {
        for(j = 0; j < columnSecond; ++j) {
            cout << mult[i][j] << "\t";
            if(j == columnSecond - 1) {
                cout << endl;
            }
        }
    }
}