//////////////////////////////
// Change string characters //
//////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string myString = "Hello";

    myString[0] = 'J';
    cout << myString << endl;

    askOS();
    return 0;
}

/*
Output:

Jello
*/