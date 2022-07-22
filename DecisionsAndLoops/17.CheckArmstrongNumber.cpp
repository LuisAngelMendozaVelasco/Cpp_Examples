/*A positive integer is called an Armstrong number (of order n) if:
abcd... = an + bn + cn + dn + ...
In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. 
For example, 153 is an Armstrong number because:
153 = 1*1*1 + 5*5*5 + 3*3*3*/

#include <cmath>
#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0, result = 0, power;

    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n; //Number of digits
    }
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        originalNum /= 10;
        // pow() returns a double value
        // round() returns the equivalent int
        power = pow(remainder, n);
        result += power;
    }

    if (result == num) {
        cout << "\n\"" << num << "\" is an Armstrong number!" << endl;
    }
    else {
        cout << "\n\"" << num << " is not an Armstrong number!" << endl;
    }  

    askOS();
    return 0;
}