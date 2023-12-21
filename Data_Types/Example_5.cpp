//////////////////////////
// Create boolean types //
//////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int main() {
    bool isCodingFun = true;
    bool isFishTasty = false;

    cout << isCodingFun << "\n";
    cout << isFishTasty << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;

    askOS();
    return 0;
}

/*
Output:

1
0
Size of bool: 1 bytes
*/