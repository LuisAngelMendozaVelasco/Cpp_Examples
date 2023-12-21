////////////////////////////////////////////////////////////
// Create an unchangeable variable with the const keyword //
////////////////////////////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    const int myNum = 15;
    cout << myNum << endl;

    askOS();
    return 0;
}

/*
Output:

15
*/