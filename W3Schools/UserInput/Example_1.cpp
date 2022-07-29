//Input a number and print the result

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int x;

    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard

    cout << "\nYour number is: " << x << endl;

    askOS();
    return 0;
}