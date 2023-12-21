/////////////////////////////
// Default parameter value //
/////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

void myFunction(string country = "Norway") {
    cout << country << "\n";
}

int main() {
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");

    askOS();
    return 0;
}

/*
Output:

Sweden
India
Norway
USA
*/