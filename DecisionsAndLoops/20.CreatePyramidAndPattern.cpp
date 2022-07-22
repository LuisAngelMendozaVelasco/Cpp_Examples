//Examples to print half pyramid, pyramid, inverted pyramid, Pascal's Triangle and Floyd's triangle

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int option, rows;

    cout << "1. Print half pyramid" << endl;
    cout << "2. Print inverted half pyramid" << endl;
    cout << "3. Print full pyramid" << endl;
    cout << "4. Print inverted full pyramid" << endl;
    cout << "\nChoose an option: ";
    cin >> option;

    switch(option) {
    case 1:
        cout << "\nEnter number of rows: ";
        cin >> rows;

        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 2:
        cout << "\nEnter number of rows: ";
        cin >> rows;

        for (int i = rows; i >= 1; --i) {
            for (int j = 1; j <= i; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 3:
        int space;

        cout <<"\nEnter number of rows: ";
        cin >> rows;

        for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
            for (space = 1; space <= rows-i; ++space) {
                cout <<"  ";
            }

            while(k != 2*i-1) {
                cout << "* ";
                ++k;
            }
            cout << endl;
        }    
        break;

    case 4:
        cout << "\nEnter number of rows: ";
        cin >> rows;

        for (int i = rows; i >= 1; --i) {
            for (int space = 0; space < rows-i; ++space) {
                cout << "  ";
            }
            for (int j = i; j <= 2*i-1; ++j) {
                cout << "* ";  
            }
            for (int j = 0; j < i-1; ++j) {
                cout << "* ";
            }     
            cout << endl;
        }
        break;

    default:
        cout << "\nIncorrect option!" << endl;
        break;
    }        

    askOS();
    return 0;
}