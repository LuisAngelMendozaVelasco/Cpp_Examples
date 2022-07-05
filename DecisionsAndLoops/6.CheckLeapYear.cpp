/*This program checks whether an year (integer) entered by the user is a leap year or not.
All years which are perfectly divisible by 4 are leap years except for century years (years ending with 00), which are leap years only if they are perfectly divisible by 400.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    /*If year is divisible by 4 AND not divisible by 100
    OR if year is divisible by 400
    then it is a leap year*/
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "\n\"" << year << "\" is a leap year!" << endl;
    }
    else {
        cout << "\n\"" << year << "\" is not a leap year!" << endl;
    }

    askOS();
    return 0;
}