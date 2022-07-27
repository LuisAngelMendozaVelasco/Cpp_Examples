//This program takes a positive integer from an user and displays all the factors of that number.

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int n, i;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "\nFactors of \"" << n << "\" are: " << endl;  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0) {
            if (i < n) {
                cout << i << ", ";
            }
            else {
                cout << i << "." << endl;
            }
        }     
    }

    askOS();
    return 0;
}