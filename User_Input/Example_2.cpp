/////////////////////////////////////////
// Input two numbers and print the sum //
/////////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int x, y;
    int sum;

    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;

    sum = x + y;
    cout << "\nSum is: " << sum << endl;

    askOS();
    return 0;
}

/*
Output:

Type a number: 1
Type another number: 2

Sum is: 3
*/