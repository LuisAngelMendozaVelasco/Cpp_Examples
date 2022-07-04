//The user is asked to enter two integers (divisor and dividend) and the quotient and the remainder of their division is computed.
//To compute quotient and remainder, both divisor and dividend should be integers.

#include <iostream>
using namespace std;

void askOS() {
    #ifdef _WIN32 //Ask for the OS
        system("pause");
    #endif
}

int main() {    
    int divisor, dividend, quotient, remainder;

    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor; //The division operator / computes the quotient (either between float or integer variables).
    remainder = dividend % divisor; //The modulus operator % computes the remainder when one integer is divided by another (modulus operator cannot be used for floating-type variables).

    cout << endl << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;

    askOS();
    return 0;
}