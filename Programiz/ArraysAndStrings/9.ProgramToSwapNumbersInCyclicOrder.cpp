/*Three variables entered by the user are stored in variables a, b and c respectively.
Then, these variables are passed to the function cyclicSwap(). Instead of passing the actual variables, addresses of these variables are passed.
When these variables are swapped in cyclic order in the cyclicSwap() function, variables a, b and c in the main function are also automatically swapped.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

void cyclicSwap(int *a, int *b, int *c);

int main() {
    int a, b, c;

    cout << "Enter value of a, b and c!" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    cout << "\nValues before swapping!" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    cyclicSwap(&a, &b, &c); //Pass addresses

    cout << "\nValue after swapping numbers in cycle!" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    askOS();
    return 0;
}

void cyclicSwap(int *a, int *b, int *c) {
    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}