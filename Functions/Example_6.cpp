/////////////////////////
// Multiple parameters //
/////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;

void myFunction(string fname, int age) {
    cout << fname << " Refsnes, " << age << " years old. \n";
}

int main() {
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);

    askOS();
    return 0;
}

/*
Output:

Liam Refsnes, 3 years old. 
Jenny Refsnes, 14 years old. 
Anja Refsnes, 30 years old. 
*/