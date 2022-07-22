//This program takes two positive integers from user and calculates GCD using recursion.

#include <iostream>
#include "myFunctions.h"
using namespace std;

int hcf(int n1, int n2);

int main() {
    int n1, n2;

    cout << "Enter two positive integers!" << endl;
    cout << "First integer: ";
    cin >> n1;
    cout << "Second integer: ";
    cin >> n2;

    cout << "\nH.C.F of \"" << n1 << "\" & \"" <<  n2 << "\" is: " << hcf(n1, n2) << endl;

    askOS();
    return 0;
}

int hcf(int n1, int n2) {
    if(n2 != 0) {
        return hcf(n2, n1 % n2);
    }
    else {
        return n1;
    }   
}