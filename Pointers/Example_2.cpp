///////////////////////////////////////////////////////////////
// Get the value of a variable with the dereference operator //
///////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

    // Reference: Output the memory address of food with the pointer
    cout << ptr << "\n";

    // Dereference: Output the value of food with the pointer
    cout << *ptr << "\n";

    askOS();
    return 0;
}

/*
Output:

0x7ffe7d982780
Pizza
*/