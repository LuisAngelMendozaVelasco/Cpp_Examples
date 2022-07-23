//Convert binary number to octal

#include <iostream>
#include <cmath>
#include "myFunctions.h"
using namespace std;

int convertBinarytoOctal(long long);

int main() {
    long long binaryNumber;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    cout << "\n\"" << binaryNumber << "\" in binary = \"" << convertBinarytoOctal(binaryNumber) << "\" in octal " << endl;

    askOS();
    return 0;
}

int convertBinarytoOctal(long long binaryNumber) {
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0) { //Convert binary to decimal
        decimalNumber += (binaryNumber%10) * pow(2, i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0) { //Convert decimal to octal
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}