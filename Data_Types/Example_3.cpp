/////////////////////////
// Create a float type //
/////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;
 
int main () {
    float myNum = 5.75;

    cout << myNum << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;

    askOS();
    return 0;
}

/*
Output:

5.75
Size of float: 4 bytes
*/