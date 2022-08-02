//Parameters and arguments

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

void myFunction(string fname) {
    cout << fname << " Refsnes\n";
}

int main() {
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");

    askOS();
    return 0;
}
