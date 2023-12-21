//////////////////////////
// Create a constructor //
//////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

/*
A constructor in C++ is a special method that is automatically called when an object of a class is created.
To create a constructor, use the same name as the class, followed by parentheses ().
*/
class MyClass {         // The class
    public:             // Access specifier
        MyClass() {     // Constructor
            cout << "Hello World!" << endl;
        }
};

int main() {
    MyClass myObj;    // Create an object of MyClass (this will call the constructor)

    askOS();
    return 0;
}

/*
Output:

Hello World!
*/