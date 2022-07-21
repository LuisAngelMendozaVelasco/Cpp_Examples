//LCM of two integers a and b is the smallest positive integer that is divisible by both a and b.

#include <iostream>
#include "myFunctions.h"
using namespace std;

int main() {
    int n1, n2, max;

    cout << "Enter two numbers!" << endl;
    cout << "First number: ";
    cin >> n1;
    cout << "Second number: ";
    cin >> n2;

    /*Maximum value between n1 and n2 is stored in max
    """The conditional operator (?) evaluates an expression, returning one value if that expression evaluates to true, 
    and a different one if the expression evaluates as false. Its syntax is:
    condition ? result1 : result2"""*/
    max = (n1 > n2) ? n1 : n2;

    do {
        if (max % n1 == 0 && max % n2 == 0) {
            cout << "\nLCM = " << max << endl;
            break;
        }
        else {
            ++max;
        }
    } while (true);

    askOS();
    return 0;
}