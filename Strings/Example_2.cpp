//////////////////////////
// String concatenation //
//////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;
 
int main() {
    string firstName = "Luis ";
    string lastName = "Mendoza";
    string fullName = firstName + lastName;

    cout << fullName << endl;

    askOS();
    return 0;
}

/*
Output:

Luis Mendoza
*/