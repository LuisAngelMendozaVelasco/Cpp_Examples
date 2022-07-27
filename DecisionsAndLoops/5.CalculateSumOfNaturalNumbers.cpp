/*Positive integers 1, 2, 3, 4... are known as natural numbers.
This program takes a positive integer from user (suppose user entered n) then, this program displays the value of 1+2+3+....+n.*/

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "\nSum = " << sum << endl;

    askOS();
    return 0;
}