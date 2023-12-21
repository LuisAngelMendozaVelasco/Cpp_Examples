////////////////////////////////
// Create and call a function //
////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

void myFunction() {
    cout << "I just got executed!" << endl;
}

int main() {
    myFunction();

    askOS();
    return 0;
}

/*
Output:

I just got executed!
*/