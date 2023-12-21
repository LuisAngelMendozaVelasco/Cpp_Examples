/////////////////////////////////////////////////////////////
// Create an object of a class and access class attributes //
/////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
#include "../myFunctions.h" 
using namespace std;

class MyClass {          // The class
    public:              // Access specifier
        int myNum;       // Attribute (int variable)
        string myString; // Attribute (string variable)
};

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Some text";

    // Print values
    cout << myObj.myNum << "\n"; 
    cout << myObj.myString << endl; 

    askOS();
    return 0;
}

/*
Output:

15
Some text
*/