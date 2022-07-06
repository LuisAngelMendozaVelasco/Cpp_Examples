/*Example to generate the multiplication table of a number (entered by the user) using for loop.
This program computes the multiplication table up to 10 only.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    askOS();
    return 0;
}