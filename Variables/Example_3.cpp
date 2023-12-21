//////////////////////////////////////////////////////////////////////////////////////
// Assign a new value to an existing value (this will overwrite the previous value) //
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int myNum = 15;   // Now myNum is 15

    myNum = 10;       // Now myNum is 10
    cout << myNum << endl;

    askOS();
    return 0;
}

/*
Output:

10
*/