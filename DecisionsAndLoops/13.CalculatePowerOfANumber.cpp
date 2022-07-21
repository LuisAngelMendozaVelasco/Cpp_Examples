/*This program takes two numbers from the user (a base number and an exponent) and calculates the power.
Power of a number = base^exponent*/

#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int main() {
    float base, exponent, result;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    result = pow(base, exponent);
    cout << "\n" << base << "^(" << exponent << ") = " << result << endl;

    askOS();
    return 0;
}