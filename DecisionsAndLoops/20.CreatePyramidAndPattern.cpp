//Examples to print half pyramid, pyramid, inverted pyramid, Pascal's Triangle and Floyd's triangle

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int option;

    cout << "1. Print half pyramid" << endl;
    cout << "\nChoose an option: ";
    cin >> option;

    switch(option) {
    case 1:
        int rows;

        cout << "\nEnter number of rows: ";
        cin >> rows;

        for(int i = 1; i <= rows; ++i) {
            for(int j = 1; j <= i; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
        break;
    }

    askOS();
    return 0;
}