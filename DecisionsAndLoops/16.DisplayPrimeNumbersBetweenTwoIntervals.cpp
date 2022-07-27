//Example to print all prime numbers between two numbers (entered by the user)

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int low, high, i;
    bool is_prime;

    cout << "Enter two numbers!" << endl;
    cout << "Enter low interval: ";
    cin >> low;
    cout << "Enter high interval: ";
    cin >> high;

    cout << "\nPrime numbers between \"" << low << "\" and \"" << high << "\" are: " << endl;

    while (low < high) {
        is_prime = true;

        //0 and 1 are not prime numbers
        if (low == 0 || low == 1) {
            is_prime = false;
        }

        for (i = 2; i <= low/2; ++i) {
            if (low % i == 0) {
                is_prime = false;
                break;
            }
        }
        
        if (is_prime) {
            cout << low << ", ";
        }

        ++low;
    }

    cout << endl;

    askOS();
    return 0;
}