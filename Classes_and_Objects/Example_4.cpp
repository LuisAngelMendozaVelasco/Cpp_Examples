////////////////////////////////////////////////////////
// Define a class method outside the class definition //
////////////////////////////////////////////////////////

#include <iostream>
#include "../myFunctions.h"
using namespace std;

class MyClass {             // The class
    public:                 // Access specifier
        void myMethod();    // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
    cout << "Hello World!" << endl;
}

int main() {
    MyClass myObj;     // Create an object of MyClass

    myObj.myMethod();  // Call the method

    askOS();
    return 0;
}

/*
Output:

Hello World!
*/