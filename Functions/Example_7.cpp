//////////////////
// Return value //
//////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

int myFunction(int x) {
    return 5 + x;
}

int main() {
    cout << myFunction(3) << endl;

    askOS();
    return 0;
}

/*
Output:

8
*/