///////////////////////////////////////////////////////////////////////////////
// Create a variable without assigning the value, and assign the value later //
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int myNum;

    myNum = 15;
    cout << myNum << endl;

    askOS();
    return 0;
}

/*
Output:

15
*/