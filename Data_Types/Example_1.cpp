/////////////////////////////////////////////
// A demonstration of different data types //
/////////////////////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h"
using namespace std;
 
int main () {
    // Creating variables
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myString = "Hello";   // String

    // Print variable values
    cout << "int: " << myNum << "\n";
    cout << "float: " << myFloatNum << "\n";
    cout << "double: " << myDoubleNum << "\n";
    cout << "char: " << myLetter << "\n";
    cout << "bool: " << myBoolean << "\n";
    cout << "string: " << myString << "\n";

    askOS();
    return 0;
}

/*
Output:

int: 5
float: 5.99
double: 9.98
char: D
bool: 1
string: Hello
*/