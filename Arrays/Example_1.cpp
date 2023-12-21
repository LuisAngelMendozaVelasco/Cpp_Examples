////////////////////////////////
// Create and access an array //
////////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars[0] << endl;

    askOS();
    return 0;
}

/*
Output:

Volvo
*/