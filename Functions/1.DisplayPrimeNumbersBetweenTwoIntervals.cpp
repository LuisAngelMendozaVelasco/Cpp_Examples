//Example to print all prime numbers between two numbers (entered by the user) by making a user-defined function.

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int check_prime(int); //Declare function

int main() {
    int n1, n2;
    bool flag;

    cout << "Enter two positive integers!" << endl;
    cout << "First integer: ";
    cin >> n1;
    cout << "Second integer: ";
    cin >> n2;

    //Swapping n1 and n2 if n1 is greater than n2
    if (n1 > n2) {
        n2 = n1 + n2;
        n1 = n2 - n1;
        n2 = n2 - n1;
    }

    cout << "\nPrime numbers between \"" << n1 << "\" and \"" << n2 << "\" are:\n";

    for(int i = n1+1; i < n2; ++i) {
        //If i is a prime number, flag will be equal to 1
        flag = check_prime(i);
        if(flag) {
            cout << i << ", ";
        }   
    }

    cout << endl;

    askOS();
    return 0;
}

//User-defined function to check prime number
int check_prime(int n) {
    bool is_prime = true;

    //0 and 1 are not prime numbers
    if (n == 0 || n == 1) {
        is_prime = false;
    }

    for(int j = 2; j <= n/2; ++j) {
        if (n%j == 0) {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}