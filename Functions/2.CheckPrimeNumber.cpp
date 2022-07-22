//Check whether a number entered by the user is prime or not by passing it to a user-defined function.

#include <iostream>
#include "myFunctions.h"
using namespace std;

bool check_prime(int);

int main() {
    int n;

    cout << "Enter a positive  integer: ";
    cin >> n;

    if (check_prime(n)) {
        cout << "\n\"" << n << "\" is a prime number!" << endl;
    }
    else {
        cout << "\n\"" << n << "\" is not a prime number!" << endl;
    }

    askOS();
    return 0;
}

bool check_prime(int n) {
    bool is_prime = true;

    //0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}