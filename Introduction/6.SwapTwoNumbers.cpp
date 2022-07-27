/*This example contains a technique to swap numbers in C programming.
To perform swapping in above example, three variables are used.
The contents of the first variable is copied into the temp variable. Then, the contents of second variable is copied to the first variable.
Finally, the contents of the temp variable is copied back to the second variable which completes the swapping process.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int a = 5, b = 10, temp;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    askOS();
    return 0;
}