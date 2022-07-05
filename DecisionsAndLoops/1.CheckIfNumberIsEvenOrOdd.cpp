/*In this example, if...else statement is used to check whether a number entered by the user is even or odd.
To check whether an integer is even or odd, the remainder is calculated when it is divided by 2 using modulus operator %. 
If the remainder is zero, that integer is even if not that integer is odd.*/

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << "\"" << n << "\" is even!" << endl;
    else
        cout << "\"" << n << "\" is odd!" << endl;

    askOS();
    return 0;
}
