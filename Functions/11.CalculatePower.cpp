//This program calculates the power of a number using recursion where base and exponent is entered by the user.

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int calculatePower(int, int);

int main() {
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;
    cout << "Enter power number (positive integer): ";
    cin >> powerRaised;

    result = calculatePower(base, powerRaised);
    cout << "\n" << base << "^" << powerRaised << " = " << result << endl;

    askOS();
    return 0;
}

int calculatePower(int base, int powerRaised)
{
    if(powerRaised != 0) {
        return (base*calculatePower(base, powerRaised-1));
    }
    else {
        return 1;
    }   
}