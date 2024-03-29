///////////////////////////////
// Create a pointer variable //
///////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string food = "Pizza";  // A string variable
    string* ptr = &food;  // A pointer variable that stores the address of food

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptr << "\n";

    askOS();
    return 0;
}

/*
Output:

Pizza
0x7ffe95781c40
0x7ffe95781c40
*/