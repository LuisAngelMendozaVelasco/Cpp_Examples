/////////////////////////////////////
// Get the size/length of an array //
/////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};

    cout << sizeof(myNumbers) << " bytes" << endl;

    askOS();
    return 0;
}

/*
Output:

20 bytes
*/