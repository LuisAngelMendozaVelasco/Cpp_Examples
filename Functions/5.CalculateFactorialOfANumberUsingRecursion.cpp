//Example to find factorial of a non-negative integer (entered by the user) using recursion.

#include <iostream>
#include "../myFunctions.h"
using namespace std;

unsigned long factorial(int n);

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "\nFactorial of \"" << n << "\" = " << factorial(n) << endl;

    askOS();
    return 0;
}

unsigned long factorial(int n) {
    if(n > 1) {
        return n * factorial(n - 1);
    }
    else {
        return 1;
    }
}
