//////////////////////////////
// Modify the pointer value //
//////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer
    cout << *ptr << "\n";

    // Output the new value of the food variable
    cout << food << "\n";

    askOS();
    return 0;
}

/*
Output:

Pizza
0x7ffc31404af0
Pizza
Hamburger
Hamburger
*/