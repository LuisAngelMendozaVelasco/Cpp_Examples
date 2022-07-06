/*The factorial of a number is the product of all the integers from 1 up to that number. 
The factorial can only be defined for positive integers.
The factorial of a negative number doesn't exist. And the factorial of 0 is 1.
In this program below, the user is asked to enter a positive integer. 
Then the factorial of that number is computed and displayed on the screen.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int n;
    long double factorial = 1.0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "\nError, factorial of a negative number doesn't exist!" << endl;
    }
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "\nFactorial of " << n << " = " << factorial << endl;    
    }

    askOS();
    return 0;
}