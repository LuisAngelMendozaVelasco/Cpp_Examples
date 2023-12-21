/////////////////////////////////////////////
// Access the memory address of a variable //
/////////////////////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

int main() {
    string food = "Pizza";

    cout << &food << endl;

    askOS();
    return 0;
}

/*
Output:

0x7ffcf63f9890
*/