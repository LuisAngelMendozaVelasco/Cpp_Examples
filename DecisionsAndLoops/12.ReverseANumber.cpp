/*This program takes an integer input from the user and stores it in variable n.
Then the while loop is iterated until n != 0 is false.
In each iteration, the remainder when the value of n is divided by 10 is calculated, 
reversed_number is computed and the value of n is decreased 10 fold.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int n, reversed_number = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "\nReversed Number = " << reversed_number <<endl;

    askOS();
    return 0;
}