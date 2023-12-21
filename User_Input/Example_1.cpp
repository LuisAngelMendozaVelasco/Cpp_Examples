/////////////////////////////////////////
// Input a number and print the result //
/////////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int x;

    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard

    cout << "Your number is: " << x << endl;

    askOS();
    return 0;
}

/*
Output:

Type a number: 1
Your number is: 1
*/